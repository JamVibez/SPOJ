#include <iostream>

using namespace std;
int d,n,x;

int main()
{
    cin>>d;
    for(int i=0; i<d; i++)
    {
        cin>>n;
        int *tab = new int[n];
        for(int j=0; j<n; j++)
        {
            cin>>x;
            tab[j]=x;
        }
        for(int j=1; j<=n; j++)
        {
            if (j<n) cout<<tab[j]<<" ";
            else cout<<tab[0]<<endl;
        }
        delete [] tab;
    }
    return 0;
}
