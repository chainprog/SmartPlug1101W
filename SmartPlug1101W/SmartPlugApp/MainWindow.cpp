#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "../SmartPlugLib/SmartPlug.h"
#include "../SmartPlugLib/DeviceFinder.h"
#include <QNetworkInterface>
#include <QList>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStringListModel(this);

    QStringList list;
    list << "Test" << "Test2";

    model->setStringList(list);

    ui->listView->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSearchDevices_clicked()
{
    int row = model->rowCount();
    model->insertRows(row,1);
    QModelIndex index = model->index(row);

    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);

    std::list<SmartPlug*> plugs;

    DeviceFinder *dvf = new DeviceFinder(54520, 20560);

    QNetworkInterface *inter = new QNetworkInterface();
    QList<QNetworkInterface> lst = inter->allInterfaces();
    for(int i = 0; i < lst.size(); ++i) {
        for(int j = 0; j < lst.at(i).addressEntries().size(); ++j) {
           dvf->findDevices(lst.at(i).addressEntries().at(j));
        }

    }
}
