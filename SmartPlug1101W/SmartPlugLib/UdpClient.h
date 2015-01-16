#ifndef UDPCLIENT_H
#define UDPCLIENT_H

#include <QUdpSocket>
#include <QObject>
#include <QNetworkAddressEntry>
#include <IPEndPoint.h>

class UdpClient : public QObject
{
    Q_OBJECT

private:
    QNetworkAddressEntry hostAddress;
    QUdpSocket *sendSocket;
    QUdpSocket *receiveSocket;
    long sendingPort;

private slots:
    void readResponse();

public:
    UdpClient();
    ~UdpClient();
    UdpClient(long sendingPort, QNetworkAddressEntry senderAddress);

    void send(QByteArray *bytesToSend, IPEndPoint *endPoint);
};

#endif // UDPCLIENT_H
