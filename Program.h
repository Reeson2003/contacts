//
// Created by Тоня on 06.11.2017.
//

#ifndef CONTACTS_PROGRAM_H
#define CONTACTS_PROGRAM_H


#include "InputHandler.h"
#include "inputHandlers/StartProgramHandler.h"

class Program {
public:
    InputHandler* inputHandler;
public:
    void execute();

    Program();

    void setInputHandler(InputHandler* inputHandler);

    virtual ~Program();
};


#endif //CONTACTS_PROGRAM_H
