#include <iostream>
#include<cstdlib>

using namespace std;

int n,liczba;
bool liczba_pierwsza(int x);

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>liczba;
        if (liczba<2) cout<<"NIE\n";
        else if (liczba==2) cout<<"TAK\n";
        else if (liczba_pierwsza(liczba)==false) cout <<"NIE\n";
        else cout<<"TAK\n";
    }
    return 0;
}

bool liczba_pierwsza(int x)
{
    int y=0;
    for(int i=2;i<x;i++)
        {
            if (x%i==0) y=1;
        }
    if (y==1) return false;
    return true;
}
