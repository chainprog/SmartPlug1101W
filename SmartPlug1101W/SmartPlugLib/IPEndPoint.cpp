#include "IPEndPoint.h"


IPEndPoint::IPEndPoint()
{

}

IPEndPoint::~IPEndPoint()
{

}

IPEndPoint::IPEndPoint(QNetworkAddressEntry endPointAddress, quint16 destionationPort)
{
    this->receivePort = destionationPort;
    this->endPointAddress = endPointAddress;
}

quint16 IPEndPoint::getReceivePort() {
    return receivePort;
}

QNetworkAddressEntry IPEndPoint::getEndPointAddress() {
    return endPointAddress;
}
