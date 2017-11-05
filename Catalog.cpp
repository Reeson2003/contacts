//
// Created by Тоня on 05.11.2017.
//

#include <iostream>
#include <fstream>
#include "Catalog.h"
#include "Configuration.h"

void Catalog::print() {
    for (int i = 0; i < entries.size(); ++i) {
        cout << "[" << i + 1 << "]\n" << entries[i].format();
    }
}

void Catalog::add(Entry entry) {
    entries.push_back(entry);
}

void Catalog::remove(int index) {
    entries.erase(entries.begin() + index - 1);
}

void Catalog::update(int index, Entry entry) {
    entries[index - 1] = entry;
}

void Catalog::load() {
    string fileName = Configuration::defaultConfiguration().get("data.file");
    ifstream is;
    is.open(fileName);
    string nextLine;
    while (is >> nextLine) {
        this->add(Entry::fromRAW(nextLine));
    }
}

void Catalog::save() {
    string fileName = Configuration::defaultConfiguration().get("data.file");
    ofstream os;
    os.open(fileName);
    for (int i = 0; i < entries.size(); ++i) {
        os << entries[i].toRAW() << "\n";
    }
    os.close();
}
