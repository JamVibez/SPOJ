#include <iostream>

using namespace std;

int d,a,b;

int main()
{
    cin>>d;
    for(int i=0;i<d;i++)
    {
        cin>>a>>b;
        cout<<(2*b*a)/(a+b)<<endl;
    }
    return 0;
}
