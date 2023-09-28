/*Scrivere un programma che effettui il conto alla rovescia a partire da un valore >=0,
pertanto bisogna gestire l'inserimento di numeri errati.*/

#include <iostream>
using namespace std;

int main() {
    float n;
    cout<<"Di quanti numeri devo fare il conto alla rovescia?"<<endl;
    cin>>n;
    while(n >= 0) {
        cout<<n<<", ";
        n = n - 1;
    }
    cout<<"FINE!"<<endl;
    return 0;
}