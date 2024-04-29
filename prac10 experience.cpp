#include<iostream>
#include<iomanip>
using namespace std;
class emp_exp
{
    int years,months;
public:

    emp_exp()
    {
        years=0;
        months=0;
    }
    emp_exp(float &n)
    {
        years=n;
        n=n-years;
        months=n*12;
    }
    void putdata()
    {
        cout<<"employee experience is "<<years<<" years and "<<months<<" months";
    }
};
int main()
{
    class emp_exp empexp;
    cout<<endl;
    cout<<"enter employee experience : ";
    float exp;
    cin>>exp;
    cout<<endl;
    empexp=exp;
    empexp.putdata();
    cout<<endl;
    return 0;
}
