#include <bits/stdc++.h>
using namespace std;
typedef vector<char> vi;
typedef vector<string> dt;

bool seach(string arr, char target)
{
    bool result = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
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

int checkEquality(vi compare, string compareTo)
{

    int result = 0;
    for (int i = 0; i < compare.size(); i++)
    {
        if (compare[i] == compareTo[i])
        {
            result += 1;
        }
        else
        {
            result += 0;
        }
    }

    return result;
}

void printChoices()
{

    dt choices{"Districts", "Plants", "Animals", "Peaples"};
    cout << " Choice the category : " << endl;
    for (int i = 0; i < choices.size(); i++)
    {
        cout << i + 1 << "." << choices[i] << endl;
    }
}

void printResult(vi foundchars, string choice)
{
    if (checkEquality(foundchars, choice) == choice.size())
    {
        cout << "\nconglatulations,  You win!!!!" << endl;
        cout << " Name required : " << choice << endl;
        cout << "Name given : ";
        int i = 0;
        while (i < foundchars.size())
        {
            cout << foundchars[i];
            i++;
        }
    }
    else
    {
        cout << "\nSorry you lost! please try again" << endl;
        cout << "Name required  : " << choice << endl;
        cout << "Name given  : ";
        int i = 0;
        while (i < foundchars.size())
        {
            cout << foundchars[i];
            i++;
        }
    }
}
int main()
{

    vector<string> districts{"NYABIHU", "DISTRICTS", "GAKENKE", "MUSANZE"};
    vector<string> plants{"AVOKADO", "MANGOES", "COCOMBLE", "BANANA"};
    vector<string> Animals{"HEN", "CHICKEN", "SHEEP", "COW"};
    vector<string> Peaples{"VALENS", "MURANGWA", "PACIFIQUE", "VAINQUER", "BANJO"};
    string choice = "GAKENKE";
    vi foundchars;
    int category;
    string main;
    char input;
    int guesTimes = choice.size();
    int i = 0;

    printChoices();

    cout << " choose category you want to use in this game : " << endl;
    cin >> category;

    cout << " gues the world " << endl;
    while (i < guesTimes)
    {
        switch (category)
        {
        case 1:
            // choice = districts[1 + rand() % districts.size()];
            choice = districts[0 + rand() % districts.size()];
            break;
        case 2:
            choice = plants[0 + rand() % plants.size()];
            break;
        case 3:
            choice = Animals[0 + rand() % Animals.size()];
            break;
        case 4:
            choice = Peaples[0 + rand() % Peaples.size()];
            break;

        default:
            cout << "please choose one choice " << endl;
            printChoices();
            break;
        }
        cin >> input;
        foundchars.push_back(input);
        main[i] = input;
        for (int j = 0; j < foundchars.size(); j++)
        {

            if (choice[j] == foundchars[j])
            {
                cout << choice[j];
            }
            else
            {
                cout << "_";
            }
            // if (seach(choice, foundchars[j]))
            // {
            //     cout << foundchars[j];
            // }
            // else
            // {
            //     cout << " _";
            // }
        }
        i++;
    }

    printResult(foundchars, choice);
}