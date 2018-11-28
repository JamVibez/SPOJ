#include <iostream>

using namespace std;
int32_t a,b;
char z;

int main()
{
    cin>>z>>a>>b;
    do
    {
        if(z=='+') cout<<a+b<<endl;
        else if(z=='-') cout<<a-b<<endl;
        else if(z=='*') cout<<a*b<<endl;
        else if(z=='/')
        {
            if(a==0||b==0) return 0;
            cout<<a/b<<endl;
        }
        else if(z=='%') cout<<a%b<<endl;
        else return 0;
    }
    while(cin>>z>>a>>b);
}
