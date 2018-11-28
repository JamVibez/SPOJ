#include <iostream>

using namespace std;

int t,x,y;
int nwd(int a,int b);

int main()
{
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        cout<<nwd(x,y);
        cout<<endl;
    }
    return 0;
}

int nwd(int a,int b)
{
    for(;;)
    {
        if(a<b) b=b-a;
        else if(a==b) return a;
        else a=a-b;
    }
}
