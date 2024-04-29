#include<iomanip>
#include<iostream>
using namespace std;
class cm;
class mm
{
private:

    float a;
public:

    void inputmm()
    {
        cout<<"enter measurement in mm - ";
        cin>>a;
    }
    mm()
    {
        a=0;
    }
    mm(cm &n);
    /*{
        a=n.getcm()*10;
    }*/
    float getmm()
    {
        return a;
    }
    putmm()
    {
        cout<<"measurement in mm = "<<a;
    }
};
class cm
{
    float a;
public:

    void inputcm()
    {
        cout<<"enter measurement in cm - ";
        cin>>a;
    }
    cm()
    {
        a=0;
    }
    cm(mm &n);
    /*{
        a=n.getmm()/10;
    }*/
    float getcm()
    {
        return a;
    }
    void putcm()
    {
        cout<<"measurement in mm = "<<a;
    }
};

cm::cm(mm &n)
    {
        a=n.getmm()/10;
    }
mm::mm(cm &n)
    {
        a=n.getcm()*10;
    }
int main()
{
    class cm ocm;
    class mm omm;
    cout<<"enter 1 for cm->mm /nenter 2 for mm->cm  -  ";
    int i;
    cin>>i;
    if(i==1)
    {
        ocm.inputcm();
        omm=ocm;
        omm.putmm();

    }
    else if(i==2)
    {
        omm.inputmm();
        ocm=omm;
        ocm.putcm();
    }
    return 0;
}
