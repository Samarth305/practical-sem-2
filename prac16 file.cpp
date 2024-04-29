#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    ifstream fin;
    int var,lngth,i,j,cnt=0;
    float price,price_limit;
    char c;
    string data,price_string,sub_str;
    fin.open("cardata.txt");
    cout<<"WELCOME TO TATA MOTORS"<<endl;
    cout<<"get the car details as per your preference"<<endl;
    cout<<"1- Model Name\t2- Fuel Type\t3- Price Range  ";
    cin>>var;
    if(var==1)
    {
        while(!fin.eof()){
        getline(fin,data,';');
        lngth=data.length();
        for(i=0;i<lngth;i++)
        {
            c=data[i];
            if(c==',')
            {
                for(j=0;j<i;j++)
                {
                    cout<<data[j];
                }
                cout<<"    ";
                break;
            }
        }
        }
    }
    if(var==2)
    {
        while(!fin.eof()){
        getline(fin,data,';');
        lngth=data.length();
        cnt=0;
        for(i=0;i<lngth;i++)
        {
            c=data[i];
            if(c==','){
                cnt++;
                if(cnt==1)
                    j=i+1;
            }
            if(cnt==2)
            {
                for(j;j<i;j++)
                {
                    cout<<data[j];
                }
                cout<<"    ";
                break;
            }
        }
        }
    }

    if(var==3)
    {
        cout<<"enter max price limit in lakhs - ";
        cin>>price_limit;
      while(!fin.eof())
      {
        getline(fin,data,';');
        lngth=data.length();
        cnt=0;
        for(i=0;i<lngth;i++)
        {
            c=data[i];
            if(c==','){
                cnt++;
                if(cnt==2){
                    j=i+1;
                            sub_str=data.substr(j,lngth-j);

                            price=std::stof(sub_str);
                            if(price_limit>=price)
                            {
                                cout<<data<<endl;
                            }
                         }
                      }
         }
        }
    }

    fin.close();
    return 0;
}
