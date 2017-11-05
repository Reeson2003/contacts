//
// Created by ���� on 05.11.2017.
//

#ifndef CONTACTS_CONFIGURATION_H
#define CONTACTS_CONFIGURATION_H


#include "Properties.h"

class Configuration: public Properties {
public:
    Configuration(const string &file);

    static Configuration defaultConfiguration();

    string get(string key);
};


#endif //CONTACTS_CONFIGURATION_H
