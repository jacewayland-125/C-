#include <iostream>
using namespace std;

int main() {
	int a,b,c,max;
    cout<<"Inserisci il 1 numero: "<<endl;
	cin>>a;
	cout<<"Inserisci il 2 numero: "<<endl;
	cin>>b;
	cout<<"Inserisci il 3 numero: "<<endl;
	cin>>c;

	do
    {
        cout<<"IL valore del 1 numero è <=0, reinserirlo qui:"<<endl;
        cin>>a;
    } while (a < 0);

    do
    {
        cout<<"IL valore del 2 numero è <=0, reinserirlo qui:"<<endl;
        cin>>b;
    } while (b < 0);
    
    do
    {
        cout<<"IL valore del 3 numero è <=0, reinserirlo qui:"<<endl;
        cin>>c;
    } while (c < 0);
    
    max=a;	
    
	if(b>max)
	    max=b;
	if(c>max)
	    max=c;

	cout<<"Il numero maggiore e': "<<max;
	return 0;
}