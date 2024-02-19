//area of a shape
#include<iostream>
#include<iomanip>
using namespace std;
float area(int a )
{
    float ans=3.14*a*a;
    return ans;
}
float area(int a, int b )
{
    float ans=a*b;
    return ans;
}
float area(int a,int b,int c )
{
    float ans=a*b*c;
    return ans;
}
int main()
{
    float ans;
    int r,l,b,h;
    cout<<"enter radius - ";
    cin>>r;
    ans=area(r);
    cout<<"area - "<<ans<<endl;
    cout<<"enter length and breadth - ";
    cin>>l>>b;
    ans=area(l,b);
    cout<<"area - "<<ans<<endl;
    cout<<"enter length , breadth and height - ";
    cin>>l>>b>>h;
    ans=area(l,b,h);
    cout<<"volume - "<<ans<<endl;
    return 0;
}
