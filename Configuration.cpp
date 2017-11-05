//
// Created by Тоня on 05.11.2017.
//

#include "Configuration.h"

static const string FILE_PATH = string(getenv("HOMEPATH")) + "/configuration.properties";

Configuration::Configuration(const string &file) : Properties(file) {}

Configuration Configuration::defaultConfiguration() {
    Configuration res = Configuration(FILE_PATH);
    res.load();
    return res;
}

string Configuration::get(string key) {
    return Properties::get(key);
}

