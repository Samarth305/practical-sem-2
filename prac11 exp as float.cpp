#include<iostream>
#include<iomanip>
using namespace std;
class emp_exp
{
    float exp;
public:
    emp_exp()
    {
        exp=0;
    }
    emp_exp(int &a)
    {
        exp=a/12.0;
    }
    void putdata()
    {
        cout<<"employee experience is : "<<exp;
    }
};
int main()
{
    class emp_exp empexp;
    int years,months,sum;
    cout<<"enter employee experience in years and months"<<endl<<"years  : ";
    cin>>years;
    cout<<"months : ";
    cin>>months;
    sum=(years*12)+months;
    empexp=sum;
    empexp.putdata();
    return 0;
}


