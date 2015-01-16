#ifndef SMARTPLUG_H
#define SMARTPLUG_H

#include <string>
#include <list>
#include <qglobal.h>

class SmartPlug
{
    private:
        quint16 id;
        quint16 port;
        std::string landingPage;
        std::string userName;
        std::string password;
        std::string model;
        std::string softwareVersion;
        std::string name;

    public:
        SmartPlug();
        ~SmartPlug();
        std::string getName() const;
        void setName(const std::string &value);
        std::string getSoftwareVersion() const;
        void setSoftwareVersion(const std::string &value);
        std::string getModel() const;
        void setModel(const std::string &value);
        std::string getPassword() const;
        void setPassword(const std::string &value);
        std::string getUserName() const;
        void setUserName(const std::string &value);
        std::string getLandingPage() const;
        void setLandingPage(const std::string &value);
        quint16 getPort() const;
        void setPort(quint16 value);
        quint16 getId() const;
        void setId(quint16 value);
};

#endif // SMARTPLUG_H
