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
    string name;
    vector<Field> fields;

public:

    Entry(string);

    Entry(string, vector<string>);

    Entry(string, vector<Field>);

    virtual ~Entry();

    void add(Field);

    string toRAW() const;

    static Entry fromRAW(string);

    string format();

    void inputFromConsole();

};


#endif //CONTACTS_ENTRY_H
