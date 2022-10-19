#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    //Inbuilt keywords
    string key[32] = { "auto", "break", "case", "char", "const",
                      "continue", "default", "do", "double", "else", "enum", "extern",
                      "float", "for", "goto", "if", "int", "long", "register", "return", "short",
                      "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while" };

    

    // taking input from user
    cout << "Enter string:" << endl;
    cin >> str;

    for (int i = 0; i < 32; i++)
    {
        if (str == key[i])
        {
            cout << " its a Invalid identifier" << endl;
            exit(0);
        }
    }
    // For tne first character
    if (!((str[0] >= 'a' && str[0] <= 'z') ||
        (str[0] >= 'A' && str[0] <= 'Z') ||
        (str[0] == '_')))
    {
        cout << str << " its not a valid identifier" << endl;
        exit(0);
    }

    //For remaining character
    else
    {
        for (int i = 1; i < str.length(); i++)
        {
            if (!((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= '0' && str[i] <= '9') ||
                (str[i] == '_')))
            {
                cout << str << " its not a valid identifier!" << endl;
                exit(0);
            }
        }
    }
    cout << "Given string is a valid identifier" << endl;
}
