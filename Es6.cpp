/*Scrivere un programma per la rappresentazione del triangolo di Floyd.Il triangolo
di floyd è un triangolo che contiene numeri naturali, definito riempiendo le righe del
triangolo con numeri consecutivi e partendo da 1 nell'angolo in alto a sinistra. Il
programma riceve da tastiera un numero N. Il programma visualizza le prime N righe
del triangolo di Floyd.
Indicazioni:
 Il numero inserito dall'utente deve essere positivo, pertanto bisogna gestire
l'inserimento di numeri errati.(3 punti)
 le operazioni necessarie alla risoluzione del problema(6 punti)
 l'output deve essere uguale all'output mostrato sotto.(3 punti)*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int N = 3;
    int vett[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Dammi N da tastiera" << endl;
        cin >> vett[N];
        if (vett[N] < 0)
        {
            cout << "Il valore di N e' <= 0:" << endl;
            cout << "Reinserirlo qui: " << endl;
            cin >> vett[N];
        }
    }
    if (vett[1] > 0)
    {
        int molt1 = vett[1] * vett[1];
        cout << "I valori inseriti sono giusti ecco qua il risultato della moltiplicazione: " << endl;
        cout << molt1 << endl;
    }
    if (vett[2] > 0)
    {
        int molt2 = vett[2] * vett[2];
        cout << "I valori inseriti sono giusti ecco qua il risultato della moltiplicazione: " << endl;
        cout << molt2 << endl;
    }
    if (vett[3] > 0)
    {
        int molt3 = vett[3] * vett[3];
        cout << "I valori inseriti sono giusti ecco qua il risultato della moltiplicazione: " << endl;
        cout << molt3 << endl;
    }
    return 0;
}