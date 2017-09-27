//
// Created by Тоня on 18.09.2017.
//

#include "CharArray.h"

CharArray::CharArray(const CharArray & other) {
    this->array = other.array;
    this->length = other.length;
}

CharArray::CharArray(char * data, int size) {
    this->array = data;
    this->length = size;
}

char * CharArray::data()const {
    return array;
}

int CharArray::size()const {
    return length;
}
