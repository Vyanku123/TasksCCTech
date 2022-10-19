#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    fstream newfile;
    int count = 0, space = 0, words = 0, vowel = 0, occurrance = 0, punch = 0, occ = 0, A = 0, E = 0, I = 0, O = 0, U = 0;
    string st;
    cout << "Enter the word to check number of occurance : ";
    cin >> st;
    cout << endl;
    newfile.open("Paragraph.txt"); // open a file to perform read operation using file object.
    if (newfile.is_open())           // checking whether the file is open.
    {
        string tp, word;
        while (getline(newfile, tp))
        {
            //cout << tp << endl;
            for (int i = 0; i < tp.length(); i++)
            {
                if (tp[i] == ' ' || tp[i] == '\t')                       //checking of spaces from file and count.
                {
                    space++;
                }
                else if (tp[i] == '!' || tp[i] == ',' || tp[i] == ';' ||
                    tp[i] == '.' || tp[i] == '?' || tp[i] == '-' ||
                    tp[i] == '\'' || tp[i] == '\"' || tp[i] == ':')   // checking for punctuation marks and count.
                {
                    punch++;
                }
                else                                                   // checking for character and count
                {
                    count++;
                }
            }
            for (int i = 0; i < tp.length(); i++)
            {
                if (tp[0] == 'A' || tp[0] == 'a')
                {
                    A++;
                }
                if (tp[0] == 'E' || tp[0] == 'e')
                {
                    E++;
                }
                if (tp[0] == 'I' || tp[0] == 'i')
                {
                    I++;
                }
                if (tp[0] == 'O' || tp[0] == 'o')
                {
                    O++;
                }
                if (tp[0] == 'U' || tp[0] == 'u')
                {
                    U++;
                }  
            }
            // Create object of istringstream and initialize assign input string
            istringstream iss(tp);
            while (iss >> word)                                         // read total no of word from file and count.
            {
                words++;
                if (word == st)                                             // checking for no of occurrance of any from file.
                {
                    occ++;
                }
                if (word[0] == 'A' || word[0] == 'a' ||
                    word[0] == 'E' || word[0] == 'e' ||
                    word[0] == 'I' || word[0] == 'i' ||
                    word[0] == 'O' || word[0] == 'o' ||
                    word[0] == 'U' || word[0] == 'u')                    // checking the word starting with vowel
                {
                    vowel++;
                }
            }
        }
    }
    newfile.close(); // close the file object.
    // print all the countings.
    cout << endl
        << "Total number of Characters are = " << count << endl;
    cout << "Number of white-space characters"
        << " is " << space << endl;
    cout << "Number of words from file"
        << " is  " << words << endl;
    cout << "Number of words which start form vowels from thge file "
        << " is " << vowel << endl;
    cout << "Number of A Vowels"
        << " is " << A << endl;
    cout << "Number of E Vowels"
        << " is " << E << endl;
    cout << "Number of I Vowels"
        << " is " << I << endl;
    cout << "Number of O Vowels"
        << " is " << O << endl;
    cout << "Number of U Vowels"
        << " is " << U << endl;
    cout << "Number of word from file with occurrance"
        << " is " << occ << endl;
    cout << "Number of punctuations "
        << " is " << punch << endl;

    return 0;
}