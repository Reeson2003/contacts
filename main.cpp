#include <iostream>
#include "Field.h"
#include "Entry.h"

using namespace std;

int main() {
    Field f1 = Field("Name", "Pavel");
    Field f2 = Field("Phone", "+79217509296");
    Field f3 = Field("City", "Saint-Petersburg");

    Field fieldArray[] = {f1, f2, f3};

    Entry entry = Entry("Contact", fieldArray, 3);

    string fields[] = {"Name", "Phone", "City"};
    Entry entry1 = Entry("Contact",fields , 3);

    cout << entry.format();
    cout << entry1.format();
    return 0;
}