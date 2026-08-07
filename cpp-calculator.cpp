#include <iostream>
using namespace std;
int main()
{
    char yes = 'y';
    while (yes == 'y')
    {
        double a, b, z;
        char v;

        cout << "enter first number : \n";
        std::cin >> a;
        cout << "enter an oparator : \n";
        std::cin >> v;
        cout << "enter second number  : \n";
        std::cin >> b;

        if (v == '+')
        {

            z = a + b;
            cout << z << endl;
        }
        else if (v == '-')
        {

            z = a - b;
            cout << z << endl;
        }
        else if (v == '*')
        {
            z = a * b;
            cout << z << endl;
        }
        else if (v == '/')
        {
            if (b == 0)
            {
                cout << "invalid";
            }
            else
            {
                z = a / b;
                cout << z << endl;
            }
        }
        else if (v == '%')
            if (a != (int)a || b != (int)b)
            {
                cout << "it will not work" << endl;
            }
            else
            {
                int i, j, k;
                i = a;
                j = b;

                if (b == 0)
                {
                    cout << "invalid";
                }
                else
                {
                    z = i % j;
                    cout << z << endl;
                }
            }
        else
        {
            cout << "invalid";
        }
        cout << "Continue? (y/n): ";
        std::cin >> yes;
    }
    cout << "Calculator closed." << endl;

    return 0;
}
