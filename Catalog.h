//
// Created by ���� on 05.11.2017.
//

#ifndef CONTACTS_CATALOG_H
#define CONTACTS_CATALOG_H


#include <search.h>
#include "Entry.h"

class Catalog {
    vector<Entry> entries;

public:
    void print();

    void remove(int index);

    void update(int index, Entry entry);

    void add(Entry entry);

    void load(string file);

    void save(string file);
};


#endif //CONTACTS_CATALOG_H
