//
// Created by User on 05.11.2017.
//

#include "Entry.h"

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

