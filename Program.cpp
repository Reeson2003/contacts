//
// Created by Тоня on 06.11.2017.
//

#include "Program.h"

void Program::setInputHandler(InputHandler* inputHandler) {
    delete (inputHandler);
    this->inputHandler = inputHandler;
}

bool Program::execute() {
    InputHandler* result = inputHandler->execute();
    if (!result)
        return 0;
    delete inputHandler;
    inputHandler = result;
    return true;
}

Program::Program() {
    inputHandler = new StartProgramHandler();
}

Program::~Program() {
delete (inputHandler);
}
