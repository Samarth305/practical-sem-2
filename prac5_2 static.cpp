//static memory
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

    circle(int x)
    {
        R=x;
        c++;
    }

    circle(circle &x)
    {
        R=x.R;
        c++;
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
    class circle x,y(20),z(x);

    x.display();

    y.display();

    z.display();
}
