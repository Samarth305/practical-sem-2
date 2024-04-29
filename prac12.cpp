//cgpa of a student
#include<iostream>
#include<iomanip>
using namespace std;
class result;
class student
{
    string name,sid;
    int sem;
public:
    void getdata_stu()
    {
    cout<<"enter name of student - ";
    getline(cin,name);
    cout<<"enter student id - ";
    getline(cin,sid);
    cout<<"enter semester - ";
    cin>>sem;
    fflush(stdin);
    }
    void putdata_stu()
    {
    cout<<endl;
    cout<<left<<setw(20)<<"student name"<<":  "<<name<<endl;
    cout<<left<<setw(20)<<"student id"<<":  "<<sid<<endl;
    cout<<left<<setw(20)<<"semester"<<":  "<<sem<<endl;
    }
    void getresult(result &s1);
    void putresult(result &s1);


};
class result
{
    string sub[3],grade_p[3],grade_t[3];
    int p[3],t[3],c_p[3],c_t[3],grademarks_p[3],grademarks_t[3];
    float sgpa;
    friend void student::getresult(result &s1);
    friend void student::putresult(result &s1);
};
void student::getresult(result &s1)
{
    int sum_m=0,sum_c=0,i;
    for(int i=0;i<3;i++)
    {
    cout<<"enter subject "<<i+1<<" name - ";
    getline(cin,s1.sub[i]);
    cout<<"enter practical and theory marks of subject "<<i+1<<" ";
    cin>>s1.p[i]>>s1.t[i];
    cout<<"enter credits of theory and practical of subject "<<i+1<<" - ";
    cin>>s1.c_t[i]>>s1.c_p[i];
    fflush(stdin);
    }
    for(i=0;i<3;i++)
    {
        if(s1.t[i]<45)
        {
            s1.grademarks_t[i]=0;
            s1.grade_t[i]="FF";
        }
        else if(s1.t[i]<50)
        {
            s1.grademarks_t[i]=4;
            s1.grade_t[i]="DD";
        }
        else if(s1.t[i]<55)
        {
            s1.grademarks_t[i]=4;
            s1.grade_t[i]="CD";
        }
        else if(s1.t[i]<60)
        {
            s1.grademarks_t[i]=6;
            s1.grade_t[i]="CC";
        }
        else if(s1.t[i]<66)
        {
            s1.grademarks_t[i]=7;
            s1.grade_t[i]="BC";
        }
        else if(s1.t[i]<73)
        {
            s1.grademarks_t[i]=8;
            s1.grade_t[i]="BB";
        }
        else if(s1.t[i]<80)
        {
            s1.grademarks_t[i]=9;
            s1.grade_t[i]="AB";
        }
        else
        {
            s1.grademarks_t[i]=10;
            s1.grade_t[i]="AA";
        }
        if(s1.p[i]<45)
        {
            s1.grademarks_p[i]=0;
            s1.grade_p[i]="FF";
        }
        else if(s1.p[i]<50)
        {
            s1.grademarks_p[i]=4;
            s1.grade_p[i]="DD";
        }
        else if(s1.p[i]<55)
        {
            s1.grademarks_p[i]=4;
            s1.grade_p[i]="CD";
        }
        else if(s1.p[i]<60)
        {
            s1.grademarks_p[i]=6;
            s1.grade_p[i]="CC";
        }
        else if(s1.p[i]<66)
        {
            s1.grademarks_p[i]=7;
            s1.grade_p[i]="BC";
        }
        else if(s1.p[i]<73)
        {
            s1.grademarks_p[i]=8;
            s1.grade_p[i]="BB";
        }
        else if(s1.p[i]<80)
        {
            s1.grademarks_p[i]=9;
            s1.grade_p[i]="AB";
        }
        else
        {
            s1.grademarks_p[i]=10;
            s1.grade_p[i]="AA";
        }
        sum_m=sum_m+s1.grademarks_p[i]*s1.c_p[i]+s1.grademarks_t[i]*s1.c_t[i];
        sum_c=s1.c_p[i]+s1.c_t[i]+sum_c;

    }
    s1.sgpa=((float)sum_m)/sum_c;
}
void student::putresult(result &s1)
{
    int i;
    cout<<endl;
    for(i=0;i<3;i++)
    {
        cout<<left<<"\t"<<setw(20)<<s1.sub[i];
        cout<<left<<setw(10)<<s1.grade_t[i]<<left<<setw(10)<<s1.grade_p[i];
        cout<<endl;
    }
    cout<<endl;
    cout<<"SGPA - "<<s1.sgpa;
    cout<<endl<<endl;
}
int main()
{
    student s;
    result b;
    s.getdata_stu();
    s.getresult(b);
    s.putdata_stu();
    s.putresult(b);
    return 0;
}
