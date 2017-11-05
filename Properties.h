//
// Created by Тоня on 05.11.2017.
//

#ifndef CONTACTS_PROPERTIES_H
#define CONTACTS_PROPERTIES_H

#include <string>
#include <map>

using namespace std;

class Properties {
    string file;
    map<string, string> props;

public:
    Properties(const string &file);

    void load();

    virtual string get(string key);
};


#endif //CONTACTS_PROPERTIES_H
