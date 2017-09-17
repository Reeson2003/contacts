//
// Created by Тоня on 17.09.2017.
//

#ifndef CONTACTS_SERIALIZABLE_H
#define CONTACTS_SERIALIZABLE_H


template<class T>
class Serializable {
public:
    virtual char *getChars() = 0;

    Serializable<class T>(const char *raw);
};

Serializable<class T>::Serializable<class T>(const char *raw) {

}


#endif //CONTACTS_SERIALIZABLE_H
