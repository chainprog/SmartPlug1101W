#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QStringList>
#include <QAbstractItemView>
#include "../SmartPlugLib/SmartPlug.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_btnSearchDevices_clicked();

private:
    Ui::MainWindow *ui;
    QStringListModel *model;
};

#endif // MAINWINDOW_H
