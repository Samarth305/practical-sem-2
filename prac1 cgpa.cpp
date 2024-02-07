//cgpa of a student
#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
    string name,sid,sub[3],grade_p[3],grade_t[3];
    int sem,p[3],t[3],c_p[3],c_t[3],sgpa,grademarks_p[3],grademarks_t[3];

};
int main()
{
    int sum_m=0,sum_c=0,i;
    struct student s1;
    cout<<"enter name of student - ";
    getline(cin,s1.name);
    cout<<"enter student id - ";
    getline(cin,s1.sid);
    cout<<"enter semester - ";
    cin>>s1.sem;
    fflush(stdin);
    for(int i=0;i<3;i++)
    {
    cout<<"enter subject "<<i+1<<" name - ";
    getline(cin,s1.sub[i]);
    cout<<"enter practical and theory marks of subject "<<i+1<" ";
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
    s1.sgpa=sum_m/sum_c;
    cout<<"student name - "<<s1.name<<endl;
    cout<<"student id - "<<s1.sid<<endl;
    cout<<"semester - "<<s1.sem<<endl;
    cout<<setw(20)<<" ";
    cout<<"theory\t practical"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<left<<"\t"<<setw(20)<<s1.sub[i];
        cout<<left<<setw(10)<<s1.grade_t[i]<<left<<setw(10)<<s1.grade_p[i];
        cout<<endl;
    }
    cout<<"sgpa - "<<s1.sgpa;
    return 0;
    }

