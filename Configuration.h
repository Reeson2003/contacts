//
// Created by Тоня on 05.11.2017.
//

#ifndef CONTACTS_CONFIGURATION_H
#define CONTACTS_CONFIGURATION_H


#include <vector>
#include "Properties.h"

class Configuration: public Properties {
    Configuration(const string &file);

    Configuration();

    Configuration &operator=(Configuration &);
public:

    static Configuration getInstance(const string &file) {
        static Configuration instance(file);
        return instance;
    }

    static Configuration getInstance() {
        return getInstance("");
    }

    string get(string key);

    vector<string> resolveFields();

    string resolveCatalogName();
};


#endif //CONTACTS_CONFIGURATION_H
