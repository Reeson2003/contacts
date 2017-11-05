//
// Created by Тоня on 05.11.2017.
//

#include <fstream>
#include <iostream>
#include "Properties.h"

const char DELIMETER = '=';

Properties::Properties(const string &file) : file(file) { this->props = map<string, string>(); }

string Properties::get(string key) {
    return props[key];
}

void Properties::load() {
    ifstream is;
    is.open(file);
    if(!is.is_open()){
        cout << "Can't read configuration file" << endl;
        exit(1);
    }
    string nextLine;
    while (is >> nextLine) {
        for (int i = 0; i < nextLine.size(); ++i) {
            if (nextLine[i] == DELIMETER) {
                string key = nextLine.substr(0, i);
                string val = nextLine.substr(i+1, nextLine.size()- i+1);
                props[key] = val;
            }
        }
    }
    is.close();
}
