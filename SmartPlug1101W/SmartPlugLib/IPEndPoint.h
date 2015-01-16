#ifndef IPENDPOINT_H
#define IPENDPOINT_H

#include <QNetworkAddressEntry>

class IPEndPoint
{
private:
    QNetworkAddressEntry endPointAddress;
    quint16 receivePort;

public:

    IPEndPoint();
    ~IPEndPoint();

    IPEndPoint(QNetworkAddressEntry endPointAddress, quint16 receivePort);

    QNetworkAddressEntry getEndPointAddress();
    quint16 getReceivePort();
};

#endif // IPENDPOINT_H
