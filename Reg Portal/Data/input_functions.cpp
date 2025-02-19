#include "../master_header.h"

int int_input()
{
    int in = 0;
    while (1)
    {
        cin >> in;
        if (cin.fail())    // FAST INPUT CHECKER FOR INTEGER
        {
            cout << "Invalid Input" << endl;
            cout << "Please Enter an Integer Value" << endl;
            cin.clear();    // CLEAR PREVIOUS INPUT STREAM
            cin.ignore(50, '\n');      // DISCARD PREVIOUS INPUT
        }
        else 
        {
            break;
        }
    }
    return in;
}

string string_input()
{
    string str = " ";
    while (1)
    {
        getline(cin, str);
        if (str.empty())    // FAST INPUT CHECKER FOR INTEGER
        {
            cout << "Invalid Input" << endl;
            cout << "Please Enter an String Input" << endl;
            fflush(stdin);
        }
        else 
        {
            break;
        }
    }
    return str;
}

string gender_input()
{
    string c;
    while(1)
    {
        cin >> c;
        for (auto &c : c)
        c = tolower(c);
        if(c == "male" || c == "female")
        {
            break;
        }
        else
        {
            cout << "Invalid Input" << endl;
            cout << "Please Enter String Input for Gender(male/female)" << endl;
            cin.clear();    // CLEAR PREVIOUS INPUT STREAM
            cin.ignore(50, '\n');      // DISCARD PREVIOUS INPUT
        }
    }
    return c;
}