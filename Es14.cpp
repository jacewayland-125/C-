#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[20];
    cout << "Inserisci una stringa da tastiera " << endl;
    cin >> s;
    int contatore = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))

        {
            contatore++;
        }
        if ((s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U'))

        {
            contatore++;
        }
        i++;
    }
    cout << "La stringa: " << s << " ha " << contatore << " Vocali " << endl;
    return 0;
}
