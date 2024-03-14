#include <bits/stdc++.h>
using namespace std;

/* author valens NIYONSENGA
   Year 2 A
   Rwanda coding academy
*/

const char *animals[7] = {"leopard", "lion", "cat", "monkey", "sheep", "gaot", "chicken"};
const char *vehicles[7] = {"VAN", "TAX", "BUS", "BICYCLE", "RITCO", "VIRUNGA", "AGATARO"};
const char *food[7] = {"BANANA", "MANGO", "PINEAPLE", "CASSSAVA", "RICE", "BEANS", "POCHO"};
const char *students[7] = {"KABANDA", "ALINE", "MURANGWA", "PAZZO", "VALENS", "DIVIN", "KEBIN"};

void print()
{
    int i = 0;

    char *choices[4] = {"Animals", "Vehicles", "food", "Students"};

    cout << " choose category for your gaming " << endl;
    cout << "" << endl;
    while (i < 4)
    {
        cout << i + 1 << "." << choices[i] << endl;
        i++;
    }
}
bool check(string name, char target)
{
    int i;
    bool result = false;
    for (i = 0; i < name.size(); i++)
    {
        if (name[i] == target)
        {
            result = true;
            break;
        }
        else
        {
            continue;
        }
    }
    return result;
}
void getResult(string word, string foundString)
{
    int count = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == foundString[i])
        {
            count += 1;
        }
    }

    if (count == word.size())
    {
        cout << "" << endl;
        cout << "\n============== result ===============" << endl;
        cout << "" << endl;
        cout << "\nExcepected name : " << word << endl;
        cout << "" << endl;
        cout << "Given name  : " << foundString << endl;
        cout << "" << endl;
        cout << " congratulations ! you win " << endl;
    }
    else
    {
        cout << "" << endl;
        cout << "\n============== result ===============" << endl;
        cout << "" << endl;
        cout << "\nExcepected name : " << word << endl;
        cout << "" << endl;
        cout << "Given name  : " << foundString << endl;
        cout << "" << endl;
        cout << " Sorry  ! you lost try again " << endl;
    }
}

void checkExistence(string name, string foundchars)
{
    char choice;
    int i = 0;
    int chances = name.size() - 1;
    while (i < name.size())
    {
        cin >> choice;
        foundchars += choice;
        if (chances > 0)
        {
            cout << "\nyou remain with  " << chances << " chances " << endl;
        }
        for (int j = 0; j < foundchars.size(); j++)
        {

            if (name[j] == foundchars[j])
            {
                cout << "_";
            }
            else
            {
                cout << name[j];
            }
        }
        chances--;
        i++;
    }

    getResult(name, foundchars);
}
int main()
{

    cout << "" << endl;
    cout << " how to play a game ?  : you are allowed to gues n times depending on your choice category and random word we chose for you " << endl;
    cout << "" << endl;
    char continueGame;
    srand(time(NULL));
    int randomNumber = rand() % (7 - 0) + 0;
    int i = 0;
    int category;
    string name;
    string foundchars;
    char choice;

    int random;

    do
    {
        print();
        cin >> category;
        cout << " you can  start guessing , ";
        switch (category)
        {
        case 1:
            name = animals[randomNumber];
            cout << " you have " << name.size() << " chances to gues !" << endl;
            break;
        case 2:
            name = vehicles[random];
            cout << " you have " << name.size() << " chances to gues !" << endl;
            break;
        case 3:
            name = food[randomNumber];
            cout << " you have " << name.size() << " chances to gues !" << endl;
            break;
        case 4:
            name = students[randomNumber];
            cout << " you have " << name.size() << " chances to gues " << endl;
            break;
        default:
            break;
        }
        checkExistence(name, foundchars);
        cout << "" << endl;
        cout << " Do you want to continue ? Y for yes and N for no" << endl;
        cin >> continueGame;

    } while (continueGame == 'Y' || continueGame == 'y');

    return 0;
}