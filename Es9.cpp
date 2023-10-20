/*Scrivere un programma che letto un numero scrive tutti i suoi divisori
(si ricorda che il resto della divisione in C++ si calcola con l’operatore % ad esempio 5%2=1)*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 0;
    cout << "Dammi il numero da tastiera" << endl;
    for (int i = 0; i < 100; i++)
    {
        cin >> a;
        int divisore = a / 2;
        if (divisore % 2 == 0)
        {
            cout << divisore << endl;
        }
    }
    return 0;
}