#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;
int d,n,m,czas;
int doba=86400;

int main()
{
    cin>>d;
    for(int i=0;i<d;i++)
    {
        float temp=0;
        cout<<temp<<endl;
        cin>>n>>m;
        for(int j=0;j<n;j++)
        {
            cin>>czas;
            temp+=(doba/czas)/m;
            cout<<"temp: "<<temp<<endl;
        }
        int temp1=temp%10;
        if(temp1==0) cout<<temp<<endl;
        else cout<<temp+1<<endl;
    }
    return 0;
}
