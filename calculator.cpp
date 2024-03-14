#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vi;
namespace arthmetic
{

    int multiply(int a, int b)
    {
        return a * b;
    }
    int divide(int a, int b)
    {
        if (a != 0)
        {
            return a / b;
        }
        else
        {
            cout << " we can not devide by zero";
        }
    }
    int add(int a, int b)
    {
        return a + b;
    }

    int substract(int a, int b)
    {
        return a - b;
    }
    void print()
    {
        cout << "Enter first and second number a,b" << endl;
    }

}

int main()
{

    vi op{"Addition", "substruction", "division", "multiplication"};
    int choice, n1, n2;
    char comma;

    for (int i = 0; i < op.size(); i++)
    {
        cout << i << "." << op[i] << endl;
    }
    cin >> choice;
    switch (choice)
    {
    case 0:
        arthmetic::print();
        cin >> n1 >> comma >> n2;
        cout << "asnwer : " << arthmetic::add(n1, n2);
        break;
    case 1:
        arthmetic::print();
        cin >> n1 >> comma >> n2;
        cout << "asnwer : " << arthmetic::substract(n1, n2);
        break;
    case 2:
        arthmetic::print();
        cin >> n1 >> comma >> n2;
        cout << "asnwer : " << arthmetic::divide(n1, n2);
        break;
    case 3:
        arthmetic::print();
        cin >> n1 >> comma >> n2;
        cout << "asnwer : " << arthmetic::multiply(n1, n2);
        break;
    default:
        break;
    }


    return 0;
}