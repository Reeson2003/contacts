//
// Created by Тоня on 17.09.2017.
//

#ifndef CONTACTS_CONTACT_H
#define CONTACTS_CONTACT_H

#include <string>
#include "Entry.h"
#include "Serializable.h"


using namespace std;

class Contact : public Entry<Contact>, public Serializable<Contact> {
    string name;
    string phone;
    string address;
public:
    Contact(string name, string phone, string address);

    const string &getName() const;

    const string &getPhone() const;

    const string &getAddress() const;

    string format() override;

    const bool operator<(const Contact& contact) override;

    const bool operator<=(const Contact& contact) override;

    const bool operator>(const Contact& contact) override;

    const bool operator>=(const Contact& contact) override;

    const bool operator==(const Contact& contact) override;

    const bool operator!=(const Contact& contact) override;

    char *getChars() override;

    Contact(const char *raw);
};


#endif //CONTACTS_CONTACT_H
