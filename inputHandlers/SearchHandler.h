//
// Created by Тоня on 21.12.2017.
//

#ifndef CONTACTS_SEARCHHANDLER_H
#define CONTACTS_SEARCHHANDLER_H


#include "../InputHandler.h"

class SearchHandler: public InputHandler {
public:
    InputHandler *execute() override;

};


#endif //CONTACTS_SEARCHHANDLER_H
