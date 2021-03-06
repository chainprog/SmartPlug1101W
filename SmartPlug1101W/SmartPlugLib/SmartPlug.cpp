#include "SmartPlug.h"
#include <qglobal.h>

std::string SmartPlug::getName() const
{
    return name;
}

void SmartPlug::setName(const std::string &value)
{
    name = value;
}

std::string SmartPlug::getSoftwareVersion() const
{
    return softwareVersion;
}

void SmartPlug::setSoftwareVersion(const std::string &value)
{
    softwareVersion = value;
}

std::string SmartPlug::getModel() const
{
    return model;
}

void SmartPlug::setModel(const std::string &value)
{
    model = value;
}

std::string SmartPlug::getPassword() const
{
    return password;
}

void SmartPlug::setPassword(const std::string &value)
{
    password = value;
}

std::string SmartPlug::getUserName() const
{
    return userName;
}

void SmartPlug::setUserName(const std::string &value)
{
    userName = value;
}

std::string SmartPlug::getLandingPage() const
{
    return landingPage;
}

void SmartPlug::setLandingPage(const std::string &value)
{
    landingPage = value;
}

quint16 SmartPlug::getPort() const
{
    return port;
}

void SmartPlug::setPort(quint16 value)
{
    port = value;
}

quint16 SmartPlug::getId() const
{
    return id;
}

void SmartPlug::setId(quint16 value)
{
    id = value;
}
SmartPlug::SmartPlug()
{

}

SmartPlug::~SmartPlug()
{

}

