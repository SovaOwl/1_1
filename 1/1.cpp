#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int size;
    int size2;
    ifstream fin("in.txt");
    ofstream out("out.txt");

    fin >> size;
    int* var = new int[size];

    for (int i = 0; i < size && fin; i++)
    {
        fin >> var[i];
    }
    
    fin >> size2;
    int* var2 = new int[size2];

    for (int i = 0; i < size2 && fin; i++)
    {
        fin >> var2[i];
    }
    
    
    out << size2 << endl;
    for (int i = size2 - 1; i >= size; i--)
    {
        out << var2[i] << " ";
    }

    for (int i = 0; i < size2-1; i++)
    {
        out << var2[i] << " ";
    }

    out << endl;

    out << size << endl;
    for (int i = 1; i < size; i++)
    {
        out << var[i] << " ";
    }
    out << var[0];


    fin.close();
    out.close();

    delete[] var;
    delete[] var2;
}