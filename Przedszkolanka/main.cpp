#include <iostream>

using namespace std;

int n,a,b,temp;
void przedszkolanka(int x,int y);

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        temp=a*b;
        przedszkolanka(a,b);
    }
    return 0;
}

void przedszkolanka(int x,int y)
{
    if(x==y) cout<<temp/x<<endl;
    else if (x>y)
    {
        x=x-y;
        przedszkolanka(x,y);
    }
    else
    {
        y=y-x;
        przedszkolanka(x,y);
    }
}
