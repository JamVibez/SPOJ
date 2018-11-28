#include <iostream>
#include <cstdlib>

using namespace std;

int d,l_k,n;

int main()
{
    cin>>d;
    for(int i=0; i<d; i++)
    {
        cin>>l_k;
        int * tab = new int[l_k];
        for(int j=0; j<l_k; j++)
        {
            cin>>n;
            tab[j]=n;
        }
        for(int j=l_k-1; j>=0; j--)
        {
            cout<<tab[j]<<" ";
        }
        delete [] tab;
    }
    return 0;
}
