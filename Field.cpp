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
    this->formatted = key + ": " + value;
    this->RAW = key + DELIMETER + value;
}

Field::~Field() {
}

const string &Field::format() const {
    return formatted;
}

const string &Field::toRAW() const {
    return RAW;
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
