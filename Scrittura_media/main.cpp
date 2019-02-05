#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char c[100];

    cout<<"Inserisci una frase nel file: ";
    cin.getline(c,100);

    fstream file;
    file.open("C:\\Users\\Criii\\Desktop\\file1.txt", ios::app);

    if(!file)
    {
        cout<<"ERRORE NELL'APERTURA DEL FILE!"<<endl;
        return -1;
    }
    else
    {
        file << c << endl;
        file.close();
    }

    return 0;
}
