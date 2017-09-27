//
// Created by Тоня on 18.09.2017.
//

#ifndef CONTACTS_CHARARRAY_H
#define CONTACTS_CHARARRAY_H


class CharArray {
private:
    char* array;
    int length;
public:
    CharArray(const CharArray&);
    CharArray(char[], int);
    char * data()const;
    int size()const;
};


#endif //CONTACTS_CHARARRAY_H
