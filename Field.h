//
// Created by User on 05.11.2017.
//

#ifndef CONTACTS_FIELD_H
#define CONTACTS_FIELD_H


#include <string>

using namespace std;

class Field {
private:
    string key;
    string value;
    string formatted;
    string RAW;
public:
    Field(const string &key, const string &value);

    virtual ~Field();

public:
    const string &getKey() const;

    const string &getValue() const;

    const string &format() const;

    const string &toRAW() const;

    static Field fromRAW(string);
};


#endif //CONTACTS_FIELD_H
