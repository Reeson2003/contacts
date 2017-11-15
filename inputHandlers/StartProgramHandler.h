//
// Created by Тоня on 06.11.2017.
//

#ifndef CONTACTS_STARTINPUTHANDLER_H
#define CONTACTS_STARTINPUTHANDLER_H


#include "../InputHandler.h"
#include "../Program.h"
#include "../Configuration.h"

class StartProgramHandler: public InputHandler{
public:
    StartProgramHandler();

public:
    InputHandler* execute() override;
};


#endif //CONTACTS_STARTINPUTHANDLER_H
