//
// Created by Тоня on 06.11.2017.
//

#ifndef CONTACTS_STARTINPUTHANDLER_H
#define CONTACTS_STARTINPUTHANDLER_H


#include "../InputHandler.h"
#include "../Program.h"

class StartInputHandler: public InputHandler{
public:
    StartInputHandler();
public:
    InputHandler* execute() override;
};


#endif //CONTACTS_STARTINPUTHANDLER_H
