#include <bits/stdc++.h>
using namespace std;

int getCount(string num, int target)
{
    int count = 0;
    int i;
    int len = num.size();
    for (i = 0; i < len; i++)
    {

        if (num[i] == target)
        {
            count += 1;
        }
        else
        {
            continue;
        }
    }

    return count;
}
int main()
{

    string num_str;
    int num, target;
    cin >> num;
    cout << " target : " << endl;
    cin >> target;
    num_str = to_string(num);
    cout << target << " found in " << getCount(num_str, target) << " times in " << num  << endl;

    return 0;
}