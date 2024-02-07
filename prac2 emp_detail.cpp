//employee details
#include<iomanip>
#include<iostream>
using namespace std;
struct employee
{
    string name,quali;
    long int c_no;
    int e_id;
    float exp;
}e[1000];
int main()
{
    int n,i,tbf_id;
    cout<<"enter number of employees - ";
    cin>>n;
    fflush(stdin);
    for(i=0;i<n;i++)
    {

        fflush(stdin);
        cout<<"enter name of employee "<<i+1<<" ";
        getline(cin,e[i].name);
        fflush(stdin);
        cout<<"enter employee id - ";
        cin>>e[i].e_id;
        fflush(stdin);
        cout<<"enter qualification - ";
        getline(cin,e[i].quali);
        fflush(stdin);
        cout<<"enter number of years of experience - ";
        cin>>e[i].exp;
        fflush(stdin);
        cout<<"enter contact number - ";
        cin>>e[i].c_no;
        fflush(stdin);

    }
    char c='Y';
    cout<<"reading data from structure and displaying"<<endl;
    do
    {
        if(tolower(c)=='y')
        {
        cout<<"enter employee id of an employee - ";
        cin>>tbf_id;
        for(i=0;i<n;i++)
        {
            if(e[i].e_id==tbf_id)
            {
                cout<<left<<setw(20)<<"employee name"<<e[i].name<<endl<<left<<setw(20)<<"qualification "<<e[i].quali<<endl<<left<<setw(20)<<"experience"<<e[i].exp<<endl<<left<<setw(20)<<"contact number"<<e[i].c_no<<endl;
                break;
            }
        }
        }
        if(i==n)
        {
            cout<<"ERROR: ENTERED EMPLOYEE ID DOES NOT EXIST";
            break;
        }
        else
    {


            cout<<"enter Y for ANOTHER EMPLOYEE DETAILS and N for EXIT - ";
            cin>>c;
    }

    }while(tolower(c)=='y');
    return 0;
}
