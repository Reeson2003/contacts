//
// Created by User on 05.11.2017.
//

#include "Field.h"

const char DELIMETER = '~';

const string &Field::getKey() const {
    return key;
}

const string &Field::getValue() const {
    return value;
}

Field::Field(const string &key, const string &value) {
    this->key = key;
    this->value = value;
}

Field::~Field() {
}

string Field::format() const {
    string result = key + ": " + value;
    return result;
}

string Field::toRAW() const {
    string result = key + DELIMETER + value;
    return result;
}

Field Field::fromRAW(string raw) {
    int delPos = 0;
    for (int i = 0; i < raw.length(); ++i) {
        if (raw[i] == DELIMETER)
            delPos = i;
    }
    string key = raw.substr(0, delPos);
    string value = raw.substr(delPos + 1, raw.size() - delPos + 1);
    return Field(key, value);
}

void Field::setValue(const string value) {
    this->value = value;
}
