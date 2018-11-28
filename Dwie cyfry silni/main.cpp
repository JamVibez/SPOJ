#include <iostream>

using namespace std;

unsigned int d,n;
unsigned int tab[]={1,1,2,6,24,20,20,40,20,80,00};

int main()
{
    cin>>d;
    for(int i=0; i<d; i++)
    {
        cin>>n;
        if(n>10) n=10;
        cout<<tab[n]/10<<" "<<tab[n]%10<<endl;
    }
    return 0;
}
