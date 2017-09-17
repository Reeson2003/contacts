//
// Created by Тоня on 17.09.2017.
//

#include <cstring>
#include "Contact.h"

const char SEPARATOR = '`';

int getNextSeparatorIndex(const char *arr, int from);

string getText(const char *arr, int from, int to);

const string &Contact::getName() const {
    return name;
}

const string &Contact::getPhone() const {
    return phone;
}

const string &Contact::getAddress() const {
    return address;
}

Contact::Contact(string name, string phone, string address) {
    this->name = name;
    this->phone = phone;
    this->address = address;
}

string Contact::format() {
    string result = "Name: "
                    + name
                    + "\n"
                    + "Phone number: "
                    + phone
                    + "\n"
                    + "Address: "
                    + address;
    return result;
}

const bool Contact::operator<(const Contact &contact) {
    return this->name < contact.name;
}

const bool Contact::operator<=(const Contact &contact) {
    return this->name <= contact.name;
}

const bool Contact::operator>(const Contact &contact) {
    return this->name > contact.name;
}

const bool Contact::operator>=(const Contact &contact) {
    return this->name >= contact.name;
}

const bool Contact::operator==(const Contact &contact) {
    return this->name == contact.name;
}

const bool Contact::operator!=(const Contact &contact) {
    return this->name != contact.name;
}

char *Contact::getChars() {
    string result = SEPARATOR + name + SEPARATOR + phone + SEPARATOR + address + SEPARATOR;
    char chars[result.size() + 1];//as 1 char space for null is also required
    strcpy(chars, result.c_str());
    return chars;
}

Contact::Contact(const char *raw) : Serializable(raw) {
    int dataSize = 3;
    string data[dataSize];
    int from = 0;
    int to = 0;
    for (int i = 0; i < dataSize; ++i) {
        from = to + 1;
        to = getNextSeparatorIndex(raw, from);
        data[i] = getText(raw, from, to);
    }
    Contact result(data[0], data[1], data[2]);
}

int getNextSeparatorIndex(const char *arr, int from) {
    for (int i = from; i < 1024 + from; ++i) {
        if (arr[i] == SEPARATOR)
            return i;
    }
}

string getText(const char *arr, int from, int to) {
    char result[to - from];
    for (int i = from; i < to; ++i) {
        result[i - from] = arr[from];
    }
    return result;
}
