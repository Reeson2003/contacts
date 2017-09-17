//
// Created by Тоня on 17.09.2017.
//

#ifndef CONTACTS_ENTRY_H
#define CONTACTS_ENTRY_H

#include <string>

using namespace std;

class Contact {
    string name;
    string phone;
    string address;
public:
    Contact(string name, string phone, string address);

    const string &getName() const;

    const string &getPhone() const;

    const string &getAddress() const;
};


#endif //CONTACTS_ENTRY_H
