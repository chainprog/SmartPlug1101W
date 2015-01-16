#ifndef IPENDPOINT_H
#define IPENDPOINT_H

#include <QNetworkAddressEntry>

class IPEndPoint
{
private:
    QNetworkAddressEntry *endPointAddress;
    long receivePort;

public:

    IPEndPoint();
    ~IPEndPoint();

    IPEndPoint(QNetworkAddressEntry *endPointAddress, long receivePort);

    QNetworkAddressEntry* getEndPointAddress();
    long getReceivePort();
};

#endif // IPENDPOINT_H
