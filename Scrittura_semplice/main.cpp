#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout<<"Scrittura su file in corso ... "<<endl<<endl;
    fstream file;
    file.open("C:\\Users\\Criii\\Desktop\\file.txt", ios::app);
    if(!file)
    {
        cout<<"ERRORE APERTURA FILE!"<<endl;
        return -1;
    }
    else
    {
        file << "Ciao a tutti, bella raga!"<<endl;
        cout<<"Scrittura file effettua con successo! Ora chiudo il file"<<endl;
        file.close();
    }

    return 0;
}
