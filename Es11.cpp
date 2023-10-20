#include <iostream>
using namespace std;

int main()
{
    int n, i, j, conta = 1;
    cout << "Dammi il valore di n: " << endl;
    cin >> n;
    for (j = n; j > 0; j--)
    {
        conta = 1;
        cout << j << " * " << j << " = " << j * j << " = " << endl;
        for (i = 1; i < j; i += 2)
        {
            if (conta < j)
            {
                conta++;
                cout << i << " + " << endl;
            }
            else
                cout << i;
        }
        cout << endl;
    }

    return 0;
}