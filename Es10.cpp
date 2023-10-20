/*3)Leggere un numero naturale n e scrivere in output un numero n di "+" o di “-”. Ad
esempio se leggo 5 l'otuput sarà: +++++, se leggo -5 sarà -----.*/
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Dammi N da tastiera" << endl;
    cin >> n;
    if (n > 0)
    {
        cout << "Il valore di N: " << n << " e' ++++" << endl;
    }
    else if (n <= 0)
    {
        cout << "Il valore di N: " << n << " e' ----" << endl;
    }

    return 0;
}