//practical 6
#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
    int emp_id;
    string emp_name,emp_quali;
    int emp_exp;
    static float exp_sum;
    int emp_sal;
    long double emp_c_no;
    static float sal_sum;
    static float emp_cnt;
public:
    void getdata()
    {
        fflush(stdin);
        cout<<"enter name of employee ";
        getline(cin,emp_name);
        fflush(stdin);
        cout<<"enter employee id - ";
        cin>>emp_id;
        fflush(stdin);
        cout<<"enter qualification - ";
        getline(cin,emp_quali);
        fflush(stdin);
        cout<<"enter number of years of experience - ";
        cin>>emp_exp;
        fflush(stdin);
        cout<<"enter contact number - ";
        cin>>emp_c_no;
        fflush(stdin);
        cout<<"enter the salary of employee - ";
        cin>>emp_sal;
        exp_sum+=emp_exp;
        sal_sum+=emp_sal;
    }
    int putdata(int id) const
    {
        if(emp_id==id)
        {
            cout<<endl<<"emp_name - "<<emp_name<<endl<<"emp_quali - "<<emp_quali<<endl<<"emp_exp - "<<emp_exp<<endl<<"emp_sal - "<<emp_sal<<endl<<"emp_c_no - "<<emp_c_no<<endl;
            return 1;
        }
    }

    employee()
    {
        emp_cnt++;
    }
    static void avg_exp_calc()
    {
        cout<<"\t\t\t\t\t"<<(exp_sum/emp_cnt);
    }
    static void avg_sal_calc()
    {
        cout<<"\t\t\t\t\t"<<(sal_sum/emp_cnt);
    }
   // ~employee()
   // {
   //     cout<<--emp_cnt<<" remaining"<<endl;
   // }

};
float employee::exp_sum=0;
float employee::sal_sum=0;
float employee::emp_cnt=0;
int main()
{
    int n,i,tbf_id,para;
    cin>>n;
    class employee *e;
    e= new employee[n];
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        (e+i)->getdata();
    }
    char c='Y';
    int option;
    do
    {
        cout<<endl<<"1-FIND\n2-AVERAGE SALARY\n3-AVERAGE EXPERIENCE\n4-EXIT         -";
        cin>>option;
        if(option==1)
    {

        cout<<"enter employee id of an employee - ";
        cin>>tbf_id;
        for(i=0;i<n;i++)
        {
            para=e[i].putdata(tbf_id);
            if(para==1)
                break;
        }

        if(i==n)
        {
            cout<<"ERROR: ENTERED EMPLOYEE ID DOES NOT EXIST";
            break;
        }

    }
        else if(option==2)
            employee::avg_sal_calc();

        else if(option==3)
            employee::avg_exp_calc();

    }while(option!=5);
}

