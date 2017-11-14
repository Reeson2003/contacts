//
// Created by Тоня on 05.11.2017.
//

#ifndef CONTACTS_CATALOG_H
#define CONTACTS_CATALOG_H


#include <search.h>
#include "Entry.h"

class Catalog {
    vector<Entry> entries;

    Catalog();

    Catalog(const Catalog &);

    Catalog &operator=(Catalog &);

public:
    void print();

    void remove(int index);

    void update(int index, Entry entry);

    void add(Entry entry);

    void load(string file);

    void save(string file);

    static Catalog& getInstance() {
        static Catalog instance;
        return instance;
    };
};


#endif //CONTACTS_CATALOG_H
