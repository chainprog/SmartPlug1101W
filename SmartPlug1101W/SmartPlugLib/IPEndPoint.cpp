#include "IPEndPoint.h"


IPEndPoint::IPEndPoint()
{

}

IPEndPoint::~IPEndPoint()
{

}

IPEndPoint::IPEndPoint(QNetworkAddressEntry *endPointAddress, long destionationPort)
{
    this->receivePort = destionationPort;
    this->endPointAddress = endPointAddress;
}

long IPEndPoint::getReceivePort() {
    return receivePort;
}

QNetworkAddressEntry* IPEndPoint::getEndPointAddress() {
    return endPointAddress;
}
