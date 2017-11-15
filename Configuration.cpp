//
// Created by Тоня on 05.11.2017.
//

#include <fstream>
#include "Configuration.h"

vector<string> fieldSet;
string catalogName;

static const string FILE_PATH = string(getenv("HOMEPATH")) + "/configuration.properties";

void loadFieldset(string);

Configuration::Configuration(const string &file): Properties((file == "") ? FILE_PATH : file){
    load();
    loadFieldset(get("fieldset.file"));
}

string Configuration::get(string key) {
    return Properties::get(key);
}

void loadFieldset(string file) {
    ifstream is;
    is.open(file);
    string nextLine;
    is >> nextLine;
    catalogName = nextLine;
    is >> nextLine;
    vector<string> result = vector<string>();
    while (is >> nextLine)
        result.push_back(nextLine);
    fieldSet = result;
}

vector<string> Configuration::resolveFields() {
    return fieldSet;
}

string Configuration::resolveCatalogName() {
    return catalogName;
}

