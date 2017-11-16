//
// Created by Тоня on 16.11.2017.
//

#ifndef CONTACTS_EXITHANDLER_H
#define CONTACTS_EXITHANDLER_H


#include "../InputHandler.h"

class ExitHandler: public InputHandler {
public:
    InputHandler *execute() override;
};


#endif //CONTACTS_EXITHANDLER_H
