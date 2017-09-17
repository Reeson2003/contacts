//
// Created by Тоня on 17.09.2017.
//

#ifndef CONTACTS_ENTRY_H
#define CONTACTS_ENTRY_H


#include <string>

using namespace std;

template<class T>
class Entry {
public:
    virtual string format()= 0;

    virtual const bool operator<(const T &)= 0;

    virtual const bool operator<=(const T &)= 0;

    virtual const bool operator>(const T &)= 0;

    virtual const bool operator>=(const T &)= 0;

    virtual const bool operator==(const T &)= 0;

    virtual const bool operator!=(const T &)= 0;
};


#endif //CONTACTS_ENTRY_H
