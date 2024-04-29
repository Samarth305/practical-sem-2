//operator overloading
#include<iostream>
using namespace std;
class number
{
    int real,img;
public:
    void getdata()
    {
        cout<<"enter real part - ";
        cin>>real;
        cout<<"enter imaginary part - ";
        cin>>img;
    }
    void operator+(number n)
    {

        cout<<real+n.real<<"+"<<img+n.img<<"i"<<endl;

    }
    void operator *(number n)
    {
        cout<<real*n.real-img*n.img<<"+"<<img*n.real+real*n.img<<"i"<<endl;

    }
    void operator -(number n)
    {
        cout<<real-n.real<<"+"<<img-n.img<<"i"<<endl;

    }
    void operator /(number n)
    {
        cout<<(real*n.real + img*n.img)/(n.img*n.img + n.real*n.real)<<"+"<<(img*n.real - real*n.img)/(n.img*n.img + n.real*n.real)<<"i"<<endl;

    }
    void operator !()
    {
        real=-real;
        img=-img;
        cout<<real<<"+"<<img<<"i"<<endl;
    }

};
int main()
{
    class number a,b;
    a.getdata();
    b.getdata();
    char c;
    cout<<"choose operation - ";
    cout<<endl<<"(+) addition\n(-) subtraction\n(*) multiplication\n(/) division\n(!) negation\nEnter Your Choice :- ";
    cin>>c;
    cout<<endl;
    switch(c)
    {
    case '+':
        a+b;
        break;
    case '-':
        a-b;
        break;
    case '*':
        a*b;
        break;
    case '!':
        !a;
        !b;
        break;
    case '/':
        a/b;
        break;
    }
    return 0;
}
