//
// Created by ���� on 05.11.2017.
//

#include <iostream>
#include <fstream>
#include <algorithm>
#include "Catalog.h"

void Catalog::print() {
    for (int i = 0; i < entries.size(); ++i) {
        cout << "[" << i << "]\n" << entries[i].format();
    }
}

void Catalog::add(Entry entry) {
    entries.push_back(entry);
    std::sort(entries.begin(), entries.end());
}

void Catalog::remove(int index) {
    entries.erase(entries.begin() + index);
    std::sort(entries.begin(), entries.end());
}

void Catalog::update(int index, Entry entry) {
    entries[index] = entry;
    std::sort(entries.begin(), entries.end());
}

void Catalog::load(string file) {
    ifstream is;
    is.open(file);
    string nextLine;
    while (is >> nextLine) {
        this->add(Entry::fromRAW(nextLine));
    }
    std::sort(entries.begin(), entries.end());
}

void Catalog::save(string file) {
    ofstream os;
    os.open(file);
    for (int i = 0; i < entries.size(); ++i) {
        os << entries[i].toRAW() << "\n";
    }
    os.close();
}

Catalog::Catalog() {
}

int Catalog::getSize() {
    return entries.size();
}

vector<Entry> Catalog::getEntries() {
    return entries;
}