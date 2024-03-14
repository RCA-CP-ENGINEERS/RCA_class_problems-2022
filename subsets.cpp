
#include <bits/stdc++.h>
using namespace std;

void getSUbs(vector<int> &A, vector<vector<int>> &res, vector<int> &subsets, int index)
{

    res.push_back(subsets);
    for (int i = index; i < A.size(); i++)
    {
        subsets.push_back(A[i]);
        cout << " hello " << endl;
        getSUbs(A, res, subsets, i + 1);
        subsets.pop_back();
    }
    return;
}

vector<vector<int>> subsets(vector<int> &A)
{
    vector<int> subsets;
    vector<vector<int>> res;
    int index = 0;
    getSUbs(A, res, subsets, index);
    return res;
}

int main()
{
    vector<int> array = {1, 2, 3};
    vector<vector<int>> res = subsets(array);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }


    return 0;
}
