
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class employee
{
    int emp_id;
    string emp_name,emp_quali;
    int emp_exp;
    static float exp_sum;
    int emp_sal;
    long double emp_c_no;
    static float emp_cnt;
protected:
    void getempdata()
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
        cout<<"salary - ";
        cin>>emp_sal;
        fflush(stdin);
        exp_sum+=emp_exp;
        fflush(stdin);
    }
    int search_emp_data(int id) const
    {
        if(emp_id==id)
        {
           // cout<<endl<<"emp_name - "<<emp_name<<endl<<"emp_quali - "<<emp_quali<<endl<<"emp_exp - "<<emp_exp<<endl<<"emp_sal - "<<emp_sal<<endl<<"emp_c_no - "<<emp_c_no<<endl;
            return 1;
        }
    }
    int putempdata() const
    {
            cout<<endl<<"emp_name - "<<emp_name<<endl<<"emp_quali - "<<emp_quali<<endl<<"emp_exp - "<<emp_exp<<endl/*<<"emp_sal - "<<emp_sal<<endl*/<<"emp_c_no - "<<emp_c_no<<endl;
            return 1;
    }

    employee()
    {
        emp_cnt++;
    }
public:
    static void avg_exp_calc()
    {
        cout<<"\t\t\t\t\t"<<(exp_sum/emp_cnt);
    }

   // ~employee()
   // {
   //     cout<<--emp_cnt<<" remaining"<<endl;
   // }

};
class teachemp:public employee
{
    string temp_desig,temp_spec,temp_pay_scale;
public:
    void getempdata(){
    employee::getempdata();
    cout<<"designation - ";
    getline(cin,temp_desig);
    cout<<"specialisation - ";
    getline(cin,temp_spec);
    cout<<"pay scale - ";
    getline(cin,temp_pay_scale);
    }

    void putempdata()
    {
        employee::putempdata();
        cout<<"designation - "<<temp_desig<<endl<<"specialisation - "<<temp_spec<<endl<<"pay scale - "<<temp_pay_scale;
    }
    int search_emp_data(int id)
    {
        int cntr;
        cntr=employee::search_emp_data(id);
        if(cntr==1)
            putempdata();
        return cntr;
    }

};
class nonteachemp:public employee
{
    long int salary;
public:

    void getempdata(){
    employee::getempdata();
    }
    void putempdata()
    {
        employee::putempdata();
        cout<<endl<<"salary - "<<salary;
    }
    int search_emp_data(int id)
    {
        int cntr;
        cntr=employee::search_emp_data(id);
        if(cntr==1)
            putempdata();
        return cntr;
    }

};

float employee::exp_sum=0;

float employee::emp_cnt=0;

int main()
{
    int ntemp,temp,i,j,tbf_id,option,cnt;
    cout<<"number of teaching and non teaching employee - ";
    cin>>temp>>ntemp;
    class teachemp *te;
    te= new teachemp[temp];
    fflush(stdin);
    class nonteachemp *nte;
    nte= new nonteachemp[ntemp];
    for(i=0;i<temp;i++)
    {
        (te+i)->getempdata();
    }
    for(i=0;i<ntemp;i++)
    {
        (nte+i)->getempdata();
    }
    char c='Y';
    do
    {
        cout<<endl<<"1-FIND\n2-AVERAGE EXPERIENCE\n3-EXIT         -";
        cin>>option;
        if(option==1)
    {

        cout<<"enter employee id of an employee - ";
        cin>>tbf_id;
        for(i=0;i<temp;i++)
        {
           cnt = te[i].search_emp_data(tbf_id);
           if(cnt==1)
            break;
           else
            continue;
        }
        if(i==temp)
        {
            j=0;
            for(j;j<ntemp;j++)
            {
                cnt=nte[j].search_emp_data(tbf_id);
                if(cnt==0)
                    continue;
                else
                    break;
            }
        }
        if(j==ntemp)
            cout<<"error : employee not found ";

        cout<<endl;


    }

    else if(option==2){
            cout<<"average experience is : ";
            employee::avg_exp_calc();}

}while(option!=3);
return 0;
}

