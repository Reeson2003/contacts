//
// Created by User on 05.11.2017.
//

#include <iostream>
#include "Entry.h"

const char ARRAY_DELIMETER = '#';

Entry::~Entry() {
}

string Entry::format() {
    string result = "";
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

Entry::Entry(vector<string> fields) {
    for (int i = 0; i < fields.size(); i++)
        this->fields.push_back(Field(fields[i], ""));
}

Entry::Entry(vector<Field> fields) {
    for (int i = 0; i < fields.size(); i++)
        this->fields.push_back(fields[i]);
}

string Entry::toRAW() const {
    string result = "";
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
            arrayItemEnd = i;
            string fieldRaw = raw.substr(arrayItemStart, arrayItemEnd - arrayItemStart);
            fields.push_back(Field::fromRAW(fieldRaw));
            arrayItemStart = arrayItemEnd + 1;
        }
    }
    Entry result = Entry(fields);
    return result;
}

void Entry::inputFromConsole() {
    for (int i = 0; i < fields.size(); ++i) {
        Field f = fields[i];
        cout << "Enter " << f.getKey() << ":" << endl;
        string val;
        cin >> val;
        f.setValue(val);
        fields[i] = f;
    }
}


bool Entry::operator<(const Entry &rhs) const {
    bool result(true);
    for (int i = 0; i < fields.size(); ++i) {
        if (this->fields[i].getValue() == rhs.fields[i].getValue())
            continue;
        else
            return (this->fields[i].getValue() < rhs.fields[i].getValue());
    }
}



