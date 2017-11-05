//
// Created by User on 05.11.2017.
//

#include <iostream>
#include "Entry.h"

const char ARRAY_DELIMETER = '#';
const string NAME = "Name";

Entry::Entry(const string name) {
    this->fields = vector<Field>();
    this->name = name;
}

Entry::~Entry() {
}

string Entry::format() {
    string result = "*** " + this->name + " ***\n";
    for (int i = 0; i < fields.size(); i++) {
        result += fields[i].format();
        result += "\n";
    }
    result += "====================\n";
    return result;
}

void Entry::add(Field field) {
    this->fields.push_back(field);
}

Entry::Entry(string name, string *fields, int fieldsLength) {
    this->name = name;
    for (int i = 0; i < fieldsLength; i++)
        this->fields.push_back(Field(fields[i], ""));
}

Entry::Entry(string name, Field *fields, int fieldsLength) {
    this->name = name;
    for (int i = 0; i < fieldsLength; i++)
        this->fields.push_back(fields[i]);
}

string Entry::toRAW() const {
    string result = name;
    result += ARRAY_DELIMETER;
    for (int i = 0; i < fields.size(); ++i) {
        result += fields[i].toRAW();
        result += ARRAY_DELIMETER;
    }
    return result;
}

Entry Entry::fromRAW(const string raw) {
    int nameEnd = 0;
    int arrayItemStart = 0;
    int arrayItemEnd = 0;
    vector<Field> fields = vector<Field>();
    for (int i = 0; i < raw.length(); ++i) {
        if (raw[i] == ARRAY_DELIMETER) {
            if (nameEnd == 0) {
                nameEnd = i;
            }
            if (arrayItemStart == 0) {
                arrayItemStart = i+1;
                continue;
            }
            if (arrayItemStart != 0) {
                arrayItemEnd = i;
                string fieldRaw = raw.substr(arrayItemStart, arrayItemEnd - arrayItemStart);
                fields.push_back(Field::fromRAW(fieldRaw));
                arrayItemStart = arrayItemEnd + 1;
            }
        }
    }
    string name = raw.substr(0, nameEnd);
    Entry result = Entry(name);
    result.fields = fields;
    return result;
}



