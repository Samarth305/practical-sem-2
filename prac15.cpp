#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class product
{
protected:
    int product_id;
    string product_name,product_manufacturer;
    float product_price;
public:
    product(int productid,string productname,string productmanufacturer,float productprice)
    {
        product_id=productid;
        product_name=productname;
        product_manufacturer=productmanufacturer;
        product_price=productprice;
    }
    virtual void putdata()=0;
};
class smartwatch:public product
{
protected:
    float dial_size;
public:
    smartwatch(int productid,string productname,string productmanufacturer,float productprice,float dialsize):product(productid,productname,productmanufacturer,productprice)
    {
        dial_size=dialsize;
    }
    void putdata()
    {
        cout<<"-----------------------------------------------------------------------";
        cout<<endl<<product_id<<" : "<<product_name<<" : "<<product_manufacturer<<" : "<<product_price<<"K : "<<dial_size<<endl;
        cout<<"-----------------------------------------------------------------------";
    }

};
class bedsheet:public product
{
protected:
    float width,height;
public:
    bedsheet(int productid,string productname,string productmanufacturer,float productprice,float heightp,float widthp):product(productid,productname,productmanufacturer,productprice)
    {
        width=widthp;
        height=heightp;
    }
    void putdata()
    {
        cout<<"-----------------------------------------------------------------------";
        cout<<endl<<product_id<<" : "<<product_name<<" : "<<product_manufacturer<<" : "<<product_price<<"K : "<<width<<" : "<<height<<endl;
        cout<<"-----------------------------------------------------------------------";
    }
};

int main()
{
    int choice,id;
    string name,manufacturer;
    float price;
    cout<<"enter 1 : smart watch menu"<<endl<<"enter 2 : bedsheet menu"<<endl<<"enter your choice : ";
    cin>>choice;
    if(choice==1)
    {
        smartwatch *sw;
        cout<<endl<<" * ENTER SMARTWATCH DATA * "<<endl;
        cout<<"enter product id : ";
        cin>>id;
        fflush(stdin);
        cout<<"enter product name : ";
        getline(cin,name);
        fflush(stdin);
        cout<<"enter product manufacturer : ";
        getline(cin,manufacturer);
        fflush(stdin);
        cout<<"enter product price (in thousands) : ";
        cin>>price;
        fflush(stdin);
        float d_size;
        cout<<"enter product dial size : ";
        cin>>d_size;
        fflush(stdin);
        sw=new smartwatch(id,name,manufacturer,price,d_size);
        sw->putdata();
        delete sw;
    }
    else if(choice==2)
    {
        bedsheet *bs;
        cout<<endl<<" * ENTER BEDSHEET DATA *";
        cout<<"enter product id : ";
        cin>>id;
        fflush(stdin);
        cout<<"enter product name : ";
        getline(cin,name);
        fflush(stdin);
        cout<<"enter product manufacturer : ";
        getline(cin,manufacturer);
        fflush(stdin);
        cout<<"enter product price (in thousands) : ";
        cin>>price;
        fflush(stdin);
        float Width,Height;
        cout<<"enter bedsheet width : ";
        cin>>Width;
        fflush(stdin);
        cout<<"enter bedsheet height : ";
        cin>>Height;
        fflush(stdin);
        bs=new bedsheet(id,name,manufacturer,price,Width,Height);
        bs->putdata();
        delete bs;
    }


}
