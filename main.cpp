#include <iostream>
#include "Field.h"
#include "Entry.h"
#include "Properties.h"
#include "Catalog.h"
#include "Configuration.h"

using namespace std;

int main() {
    Field f1 = Field("Name", "Pavel");
    Field f2 = Field("Phone", "+79217509296");
    Field f3 = Field("City", "Saint-Petersburg");
    Field fields[] = {f1, f2, f3};

    Entry e1 = Entry("Contact", fields, 3);
    Entry e2 = Entry("Contact2", fields, 3);
    Entry e3 = Entry("Contact3", fields, 3);

    Configuration configuration = Configuration::defaultConfiguration();

    Catalog catalog = Catalog();
//    catalog.add(e1);
//    catalog.add(e2);
//    catalog.add(e3);

    catalog.load();

//    catalog.save();

    catalog.print();

    return 0;
}