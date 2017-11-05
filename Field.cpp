//
// Created by User on 05.11.2017.
//

#include "Field.h"

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
}

Field::~Field() {
}

const string &Field::format() const {
    return formatted;
}
