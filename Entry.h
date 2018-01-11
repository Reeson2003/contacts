//
// Created by User on 05.11.2017.
//

#ifndef CONTACTS_ENTRY_H
#define CONTACTS_ENTRY_H

#include <vector>
#include "Field.h"

using namespace std;

class Entry {
private:
    vector<Field> fields;

public:
//    bool operator<(const Entry &rhs) const;
//
//    bool operator>(const Entry &rhs) const;

    bool operator<(const Entry &rhs) const;

//    bool operator>=(const Entry &rhs) const;

    Entry(vector<string>);

    Entry(vector<Field>);

    virtual ~Entry();

    void add(Field);

    string toRAW() const;

    static Entry fromRAW(string);

    string format();

    void inputFromConsole();

    const vector<Field> &getFields() const;
};


#endif //CONTACTS_ENTRY_H
