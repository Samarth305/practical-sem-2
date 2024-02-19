//dynamic memory
#include<iostream>
using namespace std;

int c=0;

class circle
{
private:

    int R;
    float Area;

public:

    circle()
    {
        R=1;
        c++;
    }

    circle(int y)
    {
        R=y;
        c++;
    }

    circle(class circle &x)
    {
        R=x.R;

    }

     ~circle()
    {
        c--;
       cout << "one object is deleted," << "\n" << "total active objects are " << c << endl;
    }

    void display()
    {
        Area=3.14*R*R;
        cout<<"circle with radius "<<R<<" has area "<< Area<<endl;
    }
};

int main()
{
    class circle *x;

    x = new circle;
    x->display();



    class circle *y;

    y = new circle(20);
    y->display();

    delete y;

    class circle *z;

    z = new circle(*x);
    z->display();

    delete x;
    delete z;

    return 0;
}
