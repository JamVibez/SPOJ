#include <iostream>

using namespace std;

int t,ll,liczba;

int main()
{
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> ll;
        int suma=0;
        for(int i=0;i<ll;i++)
        {
            cin>>liczba;
            suma=suma+liczba;
        }
        cout << suma <<endl;
    }
    return 0;
}
