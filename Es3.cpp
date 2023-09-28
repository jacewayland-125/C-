/*1)Scambiare il valore di due variabili senza variabili aggiuntive
2)Il massimo tra tre numeri
3)Visualizzo i numeri*/

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout<<"Dammi il valore della 1 Variabile"<<endl;
    cin>>x;
    cout<<"Dammi il valore della 2 Variabile"<<endl;
    cin>>y;
        do
        {
            cout<<"Il valore "<<x<<" è sbagliato, reinserirlo qui:"<<endl;
            cin>>x;
        } while  (x < 0 && y < 0);
        do
        {
            cout<<"Il valore "<<y<<"è sbagliato, reinserirlo qui:"<<endl;
            cin>>y;
        } while (y < 0);
    cout<<"Il valore della 1 variabile è "<<x<<endl;
    cout<<"Il valore della 2 variabile è "<<y<<endl;
    
    return 0;
}