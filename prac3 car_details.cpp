//tata motors
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class tatamotors
{
    string name,transmission,airbag;
    char fuel[50];
    float mileage,tankcap,price;
    int seating;
    public:
    void getdata()
    {
        cout<<"enter model name - ";
        getline(cin,name);
        fflush(stdin);
        cout<<"fuel type - ";
        cin.getline(fuel,50);
        fflush(stdin);
        cout<<"price (in lakhs) - ";
        cin>>price;
        fflush(stdin);
        cout<<"mileage (km/L) - ";
        cin>>mileage;
        fflush(stdin);
        cout<<"transmission - ";
        getline(cin,transmission);
        fflush(stdin);
        cout<<"tank capacity (litres) - ";
        cin>>tankcap;
        fflush(stdin);
        cout<<"seat capacity - ";
        cin>>seating;
        fflush(stdin);
        cout<<"does the car have airbags ? ";
        getline(cin,airbag);
        fflush(stdin);
    }
    putdata()
    {
        cout<<left<<setw(20)<<name<<left<<setw(20)<<fuel<<left<<setw(20)<<price<<left<<setw(20)<<mileage<<left<<setw(20)<<transmission<<left<<setw(20)<<tankcap<<left<<setw(20)<<seating<<left<<setw(20)<<airbag;
    }
    namedata()
    {
        cout<<left<<setw(20)<<name;
    }

    petroldata(char para[])
    {
        if(strcmp(fuel,para)==0)
            putdata();
    }
    dieseldata(char para[])
    {
        if(strcmp(fuel,para)==0)
            putdata();
    }
    cngdata(char para[])
    {
        if(strcmp(fuel,para)==0)
            putdata();
    }
    electricdata(char para[])
    {
        if(strcmp(fuel,para)==0)
            putdata();
    }
    pricedata(float var)
    {
        if(price<=var)
            putdata();
    }
}t[10];
int main()
{
    int n,i,var,fuel_in;

    cout<<"number of cars to be entered - ";
    cin>>n;
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        t[i].getdata();
    }
    cout<<"WELCOME TO TATA MOTORS"<<endl;
    cout<<"get the car details as per your preference"<<endl;
    cout<<"1- Model Name\t2- Fuel Type\t3- Price Range";
    cin>>var;
    if(var==1)
    {
    for(i=0;i<n;i++)
    {
        cout<<i+1<<"-";
        t[i].namedata();
        cout<<"\t";
    }
    cout<<"enter a option - ";
    cin>>i;
    cout<<left<<setw(20)<<"model name"<<left<<setw(20)<<"Fuel"<<left<<setw(20)<<"Price( Lakhs )"<<left<<setw(20)<<"Mileage(km/L)"<<left<<setw(20)<<"Transmission"<<left<<setw(20)<<"Tank capacity"<<left<<setw(20)<<"Seating CAp."<<left<<setw(20)<<"Airbags"<<endl;
    t[i-1].putdata();
    }
    else if(var==2)
    {
        cout<<"1-Petrol\t2-CNG\t3-Diesel\t4-Electric";
        cout<<"\nenter your fuel preference - ";
        cin>>fuel_in;
        if(fuel_in==1)
        {
            char para[50]="petrol";
            cout<<left<<setw(20)<<"model name"<<left<<setw(20)<<"Fuel"<<left<<setw(20)<<"Price( Lakhs )"<<left<<setw(20)<<"Mileage(km/L)"<<left<<setw(20)<<"Transmission"<<left<<setw(20)<<"Tank capacity"<<left<<setw(20)<<"Seating CAp."<<left<<setw(20)<<"Airbags"<<endl;
            for(i=0;i<n;i++)
            {
                t[i].petroldata(para);
            }
        }
        else if(fuel_in==2)
        {
        char para[50]="cng";
        cout<<left<<setw(20)<<"model name"<<left<<setw(20)<<"Fuel"<<left<<setw(20)<<"Price( Lakhs )"<<left<<setw(20)<<"Mileage(km/L)"<<left<<setw(20)<<"Transmission"<<left<<setw(20)<<"Tank capacity"<<left<<setw(20)<<"Seating CAp."<<left<<setw(20)<<"Airbags"<<endl;
            for(i=0;i<n;i++)
            {
                t[i].cngdata(para);
            }
        }
        else if(fuel_in==3)
        {
            char para[50]="diesel";
            cout<<left<<setw(20)<<"model name"<<left<<setw(20)<<"Fuel"<<left<<setw(20)<<"Price( Lakhs )"<<left<<setw(20)<<"Mileage(km/L)"<<left<<setw(20)<<"Transmission"<<left<<setw(20)<<"Tank capacity"<<left<<setw(20)<<"Seating CAp."<<left<<setw(20)<<"Airbags"<<endl;
            for(i=0;i<n;i++)
            {
                t[i].dieseldata(para);
            }
        }
        else if(fuel_in==4)
        {
            char para[50]="electric";
            cout<<left<<setw(20)<<"model name"<<left<<setw(20)<<"Fuel"<<left<<setw(20)<<"Price( Lakhs )"<<left<<setw(20)<<"Mileage(km/L)"<<left<<setw(20)<<"Transmission"<<left<<setw(20)<<"Tank capacity"<<left<<setw(20)<<"Seating CAp."<<left<<setw(20)<<"Airbags"<<endl;
            for(i=0;i<n;i++)
            {
                t[i].electricdata(para);
            }
        }

    }
    else if(var==3)
    {
        cout<<"enter max price limit in lakhs - ";
        cin>>var;
        cout<<left<<setw(20)<<"model name"<<left<<setw(20)<<"Fuel"<<left<<setw(20)<<"Price( Lakhs )"<<left<<setw(20)<<"Mileage(km/L)"<<left<<setw(20)<<"Transmission"<<left<<setw(20)<<"Tank capacity"<<left<<setw(20)<<"Seating CAp."<<left<<setw(20)<<"Airbags"<<endl;
        for(i=0;i<n;i++)
        {
            t[i].pricedata(var);
        }
    }
}

