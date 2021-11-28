#include <iostream>
#include <vector>
#include "my_app.h"

using namespace std;
using namespace my_namespace;

int main()
{
    string temp_name = "";
    int temp_value = -1;
    vector<Name_value> entries;

    while(temp_name != "NoName" && temp_value != 0)
    {
        cout << "\nEnter a name followed by a space and a value: ";
        cin >> temp_name >> temp_value;

        for(int i = 0; i < entries.size(); i++)
        {
            if(entries.at(i).name == temp_name)
            {
                cout << "\nERROR: Duplicate name.\n";
                return 1;
            }
        }

        Name_value obj;
        obj.name = temp_name;
        obj.value = temp_value;
        entries.push_back(obj);
    }

    for(int i = 0; i < entries.size() - 1; i++)
        cout << "Name: " << entries.at(i).name << "\tScore: " << entries.at(i).value << "\n";

    return 0;
}