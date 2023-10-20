/*Creare un programma per far allenare un bambino delle elementari con le tabelline.
Per 10 volte il programma estrae due numeri e chiede all’utente di scrivere il risultato del loro prodotto,
se lo sbaglia continua a chiederglielo finché non lo inserisce correttamente, alla fine il programma dice
quanti tentativi sono stati utilizzati in totale per le 10 tabelline, se ne sono stati usati 10 il programma
scrive “bravissimo”, se ne sono stati usati tra 11 e 13 “bravo”, se ne sono stati usati tra 14 e 16 “bravino”,
se ne sono stati usati di più scrivere “devi allenarti”.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int risultato_Vero = a * b;
    int risultato_Dato = a * b;
    cout << "Dammi 2 numeri da tastiera:" << endl;
    for (int num_Tent = 0; num_Tent < 20; num_Tent++)
    {
        cin >> a;
        cin >> b;
        cout << "Dammi da tastiera il loro prodotto qui:" << endl;
        cin >> risultato_Dato;
        do
        {
            cout << "Il risultato non e' giusto" << endl;
            cout << "Reinserirlo qui sotto" << endl;
            cin >> risultato_Dato;
        } while (risultato_Vero != risultato_Dato);

        if (num_Tent == 10)
        {
            cout << "I tentativi sono stati " << num_Tent << endl;
            cout << "Bravissimo" << endl;
        }
        else if (num_Tent >= 11 && num_Tent <= 13)
        {
            cout << "I tentativi sono stati " << num_Tent << endl;
            cout << "Bravo" << endl;
        }
        if (num_Tent >= 14 && num_Tent <= 16)
        {
            cout << "I tentativi sono stati " << num_Tent << endl;
            cout << "Bravino" << endl;
        }
        else if (num_Tent > 16)
        {
            cout << "I tentativi sono stati " << num_Tent << endl;
            cout << "Devi allenarti" << endl;
        }
    }
    return 0;
}