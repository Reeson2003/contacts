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
//    vector<Field> fields = vector<Field>({f1, f2, f3});
    Configuration configuration = Configuration("C:/cpp_workspace/contacts/configuration.properties");
    configuration.load();

    vector<string> fields = configuration.resolveFields(configuration.get("fieldset.file"));

    Entry e1 = Entry("Contact", fields);
    Entry e2 = Entry("Contact2", fields);
    Entry e3 = Entry("Contact3", fields);


    string file = configuration.get("data.file");

    Catalog catalog = Catalog();
    catalog.add(e1);
    catalog.add(e2);
    catalog.add(e3);

//    catalog.load(file);

    catalog.save(file);

    catalog.print();

    return 0;
}