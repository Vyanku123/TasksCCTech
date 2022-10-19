#include <iostream>
using namespace std;
int main()
{
    double amount, amount2;
    int currency, currency2;
    cout << "\t\t\t\tWelcome to Currency Conversion" << endl;
    while (1)
    {
        cout << "The currency are:\n1. USD \n2. EURO \n3. PKR\n4. INR\n5. AED \n6. Exit  " << endl;
        cout << "\nWhich currency do you want to convert\n";
        cin >> currency;
        while (1)
        {
            switch (currency)
            {
            case 1:   //for USD Conversion
                label: cout << "Enter your amount you want to convert: " << endl;
                cin >> amount;
                if (amount <= 0)
                {
                    cout << "Enter Positive value of Currency" << endl;
                    goto label;
                }
                else
                { 
                    cout << "your amount is " << amount << " USD" << endl;
                    cout << "Which currency do you want to convert to\n";
                    cout << "\tThe currency are:\n1. USD \n2. EURO \n3. PKR\n4. INR\n5. AED \n6. Exit ";
                    cin >> currency2;
                    switch (currency2)
                    {
                    case 1:
                        cout << "Into USD is" << endl;
                        amount2 = amount * 1;
                        cout << amount << " USD is equal to " << amount2 << " USD" << endl;
                        break;
                    case 2:
                        cout << "Into EURO is" << endl;
                        amount2 = amount * 1.03;
                        cout << amount << " USD is equal to " << amount2 << " EURO" << endl;
                        break;
                    case 3:
                        cout << "Into PKR is" << endl;
                        amount2 = amount * 221.01;
                        cout << amount << " USD is equal to " << amount2 << " PKR" << endl;
                        break;
                    case 4:
                        cout << "Into INR is" << endl;
                        amount2 = amount * 82.83;
                        cout << amount << " USD is equal to " << amount2 << " INR" << endl;
                        break;
                    case 5:
                        cout << "Into AED is" << endl;
                        amount2 = amount * 3.67;
                        cout << amount << " USD is equal to " << amount2 << " AED" << endl;
                        break;
                    case 6:
                        exit(0);
                    }
                }  
            case 2: // For EURO Conversion
                label1:cout << "Enter your amount you want to convert: ";
                cin >> amount;
                if (amount <= 0)
                {
                    cout << "Enter Positive value of currency" << endl;
                    goto label1;
                }
                else 
                {
                    cout << "your amount is " << amount << " EURO" << endl;
                    cout << "Which currency do you want to convert to\n";
                    cout << "\tThe currency are:\n1. USD \n2. EURO \n3. PKR\n4. INR\n5. AED \n6. Exit ";
                    cin >> currency2;
                    switch (currency2)
                    {
                    case 1:
                        cout << "Into USD is" << endl;
                        amount2 = amount * 0.97;
                        cout << amount << " EURO is equal to " << amount2 << " USD" << endl;
                        break;
                    case 2:
                        cout << "Into EURO is" << endl;
                        amount2 = amount * 1;
                        cout << amount << " EURO is equal to " << amount2 << " EURO" << endl;
                        break;
                    case 3:
                        cout << "Into PKR is" << endl;
                        amount2 = amount * 215.37;
                        cout << amount << " EURO is equal to " << amount2 << " PKR" << endl;
                        break;
                    case 4:
                        cout << "Into INR is" << endl;
                        amount2 = amount * 80.72;
                        cout << amount << " EURO is equal to " << amount2 << " INR" << endl;
                        break;
                    case 5:
                        cout << "Into AED is" << endl;
                        amount2 = amount * 3.72;
                        cout << amount << " EURO is equal to " << amount2 << " AED" << endl;
                        break;
                    case 6:
                        exit(0);
                    }
                }
                

            case 3: // For PKR
                label2: cout << "Enter your amount you want to convert: ";
                cin >> amount;
                if (amount <= 0)
                {
                    cout << "Enter Positive Value of currency" << endl;
                    goto label2;
                }
                else
                {
                    cout << "your amount is " << amount << " PKR" << endl;
                    cout << "Which currency do you want to convert to\n" << endl;
                    cout << "\tThe currency are:\n1. USD \n2. EURO \n3. PKR\n4. INR\n5. AED:  \n6. Exit";
                    cin >> currency2;
                    switch (currency2)
                    {
                    case 1:
                        cout << "Into USD is" << endl;
                        amount2 = amount * 0.0045;
                        cout << amount << " PKR is equal to " << amount2 << " USD" << endl;
                        break;
                    case 2:
                        cout << "Into EURO is" << endl;
                        amount2 = amount * 0.0046;
                        cout << amount << " PKR is equal to " << amount2 << " EURO" << endl;
                        break;
                    case 3:
                        cout << "Into PKR is" << endl;
                        amount2 = amount * 1;
                        cout << amount << " PKR is equal to " << amount2 << " PKR" << endl;
                        break;
                    case 4:
                        cout << "Into INR is" << endl;
                        amount2 = amount * .44;
                        cout << amount << " PKR is equal to " << amount2 << " INR" << endl;
                        break;
                    case 5:
                        cout << "Into AED is" << endl;
                        amount2 = amount * .0051;
                        cout << amount << " PKR is equal to " << amount2 << " AED" << endl;
                        break;
                    case 6:
                        exit(0);
                    }
                }
                

            case 4: //For INR
                label3:cout << "Enter your amount you want to convert: ";
                cin >> amount;
                if (amount <= 0)
                {
                    cout << "Enter Positive value of Currency" << endl;
                    goto label3;
                }
                else
                {
                    cout << "your amount is " << amount << " INR" << endl;
                    cout << "Which currency do you want to convert to\n";
                    cout << "The currency are:\n1. USD \n2. EURO \n3. PKR\n4. INR\n5. AED \n6. Back to main menu ";
                    cin >> currency2;
                    switch (currency2)
                    {
                    case 1:
                        cout << "Into USD is" << endl;
                        amount2 = amount * .014;
                        cout << amount << " INR is equal to " << amount2 << " USD" << endl;
                        break;
                    case 2:
                        cout << "Into EURO is" << endl;
                        amount2 = amount * .012;
                        cout << amount << " INR is equal to " << amount2 << " EURO" << endl;
                        break;
                    case 3:
                        cout << "Into PKR is" << endl;
                        amount2 = amount * 2.30;
                        cout << amount << " INR is equal to " << amount2 << " PKR" << endl;
                        break;
                    case 4:
                        cout << "Into INR is" << endl;
                        amount2 = amount * 1;
                        cout << amount << " INR is equal to " << amount2 << " INR" << endl;
                        break;
                    case 5:
                        cout << "Into AED is" << endl;
                        amount2 = amount * .050;
                        cout << amount << " INR is equal to " << amount2 << " AED" << endl;
                        break;
                    case 6:
                        exit(0);
                    }
                }
                

            case 5:  // For AED
                label4:cout << "Enter your amount you want to convert: ";
                cin >> amount;
                if (currency <= 0)
                {
                    cout << "Enter positive value of currency" << endl;
                    goto label4;
                }
                else
                {
                    cout << "your amount is " << amount << " AED" << endl;
                    cout << "Which currency do you want to convert to\n";
                    cout << "The currency are:\n1. USD \n2. EURO \n3. PKR\n4. INR\n5. AED \n6. Exit ";
                    cin >> currency2;
                    switch (currency2)
                    {
                    case 1:
                        cout << "Into USD is" << endl;
                        amount2 = amount * .27;
                        cout << amount << " AED is equal to " << amount2 << " USD" << endl;
                        break;
                    case 2:
                        cout << "Into EURO is" << endl;
                        amount2 = amount * .23;
                        cout << amount << " AED is equal to " << amount2 << " EURO" << endl;
                        break;
                    case 3:
                        cout << "Into PKR is" << endl;
                        amount2 = amount * 46.04;
                        cout << amount << " AED is equal to " << amount2 << " PKR" << endl;
                        break;
                    case 4:
                        cout << "Into INR is" << endl;
                        amount2 = amount * 20.10;
                        cout << amount << " AED is equal to " << amount2 << " INR" << endl;
                        break;
                    case 5:
                        cout << "Into AED is" << endl;
                        amount2 = amount * 1;
                        cout << amount << " AED is equal to " << amount2 << " AED" << endl;
                        break;
                    }
                    case 6:
                        exit(0);
                }
                
            }
        }

    }

}