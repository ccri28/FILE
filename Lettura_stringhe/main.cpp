#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file;
    file.open("C:\\Users\\Criii\\Desktop\\file.txt", ios::in);
    if(!file)
    {
        cout<<"ERRORE APERTURA FILE!"<<endl;
        return -1;
    }

    string s;
    while(!file.eof())
    {
        getline(file, s);
        cout<<s<<endl;
    }

    file.close();

    return 0;
}
