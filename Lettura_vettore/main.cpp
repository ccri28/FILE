#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("C:\\Users\\Criii\\Desktop\\vettore.txt", ios::in);
    if(!file)
    {
        cout<<"ERRORE NELL'APERTURA DEL FILE!"<<endl;
        return -1;
    }

    int dim = 0;
    while(!file.eof())
    {
        int tmp;
        file >> tmp;
        dim++;
    }
    file.close();
    cout<<"Dimensione vettore: "<<dim<<endl;

    int *p;
    p = new int[dim];

    file.open("C:\\Users\\Criii\\Desktop\\vettore.txt", ios::in);
    if(!file)
    {
        cout<<"ERRORE NELL'APERTURA DEL FILE!"<<endl;
        return -2;
    }

    int i=0;
    while(!file.eof() && i < dim)
    {
        file >> p[i];
        i++;
    }

    for(int i=0; i<dim; i++)
    {
        cout<<p[i]<<" ";
    }

    file.close();
    delete p;

    cout<<endl;

    return 0;
}
