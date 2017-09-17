#include <iostream>
#include "Contact.h"

using namespace std;

int main() {
    Contact contact("Turkish", "+555773453", "New-York, Broadway 23-644");
    char *raw = contact.getChars();
    Contact dry(nullptr, raw);
    cout << dry.format() << endl;
    return 0;
}