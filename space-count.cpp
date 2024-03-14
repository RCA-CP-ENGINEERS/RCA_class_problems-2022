#include <bits/stdc++.h>
using namespace std;

int cheeckspaces(string text)
{
    int count = 0;
    string x = "";
    for (int i = 0; i < text.size(); i++)
    {
        if ( text[i] == ' ')
        {
            count = count + 1;
        }
    }

    return count;
}
int main()
{

    string text;
    getline(cin, text);
    cout << text << " has " << cheeckspaces(text) << " spaces " << endl;

    return 0;
}