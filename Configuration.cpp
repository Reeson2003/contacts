//
// Created by Тоня on 05.11.2017.
//

#include <fstream>
#include "Configuration.h"

static const string FILE_PATH = string(getenv("HOMEPATH")) + "/configuration.properties";

Configuration::Configuration(const string &file) : Properties(file) {
    load();
}

Configuration Configuration::defaultConfiguration() {
    Configuration res = Configuration(FILE_PATH);
    res.load();
    return res;
}

string Configuration::get(string key) {
    return Properties::get(key);
}

vector<string> Configuration::resolveFields() {
    string fileName = get("fieldset.file");
    ifstream is;
    is.open(fileName);
    vector<string> result = vector<string>();
    string nextLine;
    while (is >> nextLine)
        result.push_back(nextLine);
    return result;
}

