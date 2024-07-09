#include<iostream>
#include<string.h>
using namespace std;

class account
{
    char name[20];
    int acc;
    public:
    void input()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter account no";
        cin>>acc;
    }
    void output()
    {
        cout<<name<<endl<<acc;
    }
};

class curacc:public account
{
    float balance,minimum,rate;
    public:
    curacc()
    {
        rate=6;
        balance=0;
        minimum=10000;
        input();
        output();

    }
    void getdat()
    {
        cout<<"enter initial balance";
        cin>>balance;
        cout<<balance;

    }
    void deposit()
    {
        float d;
        cout<<"enter deposit money";
        cin>>d;
        balance=balance+d;
        cout<<balance;
    }
    void withdrawal()
    {
        float w;
        cout<<"enter withdrawal money";
        cin>>w;
        if(balance>minimum)
        {
            cout<<balance-w;

        }
        else 
        {
            cout<<"you can not withdraw";
        }
    }
    void intrest()
    {
        int t;
        cout<<"enter time interval";
        cin>>t;
        balance=balance+((balance*rate*t)/100);
        cout<<balance;
    }
    void seebalance()
    {
        cout<<balance<<endl;
    }
};

class savacc: public account
{
    float r,balance,minimum;
    public:
    savacc()
    {
        balance=0;
        r=6;
        minimum=1000;
        input();
        output();
    }
    void getdata()
    {
        cout<<"enter initial balance";
        cin>>balance;
    }
    void deposit()
    {
        float d;
        cout<<"enter depossit money";
        cin>>d;
        balance=balance+d;
        cout<<balance;
    }
    void withdrawal()
    {
        float w;
        cout<<"enter withdrawal money";
        cin>>w;
        balance=balance-w;
        if(balance>minimum)
        {
            cout<<balance;
        }
        else
        {
            cout<<"you can not withdraw";
        }
        
    }
    void interest()
    {
        int t;
        cout<<"enter time interval";
        cin>>t;
        balance=balance+((balance*r*t)/100);
        cout<<balance<<endl;
    }
    void seebalance()
    {
        cout<<balance<<endl;

    }
};

int main()
{
    char ch[20];
    cout<<"welcome";
    cout<<"banking system";
    cout<<"enter current/saving account";
    cin>>ch;
    if (strcmp(ch,"saving")==0)
    {
        int z;
        savacc s;
        x:
        cout<<"you are in saving account"<<endl;
        cout<<"enter 1 to update balance"<<endl;
        cout<<"enter 2 to deposit money"<<endl;
        cout<<"enter 3 to withdraw money"<<endl;
        cout<<"enter 4 to see interest"<<endl;
        cout<<"enter 5 to see balnce"<<endl;
        cin>>z;
        switch (z)
        {
            case1: s.getdata();break;
            case2: s.deposit();break;
            case3: s.withdrawal();break;
            case4: s.interest();break;
            case5: s.seebalance();break;
            default: cout<<"wrong choice";break;

        }
        cout<<"\n do you want to continue?";
        cout<<"press 1";
        int w;
        cin>>w;
        if(w==1)
        goto x;
    }
    else{
        int z;
        curacc c;
        y:
        cout<<"\n you are in current account"<<endl;
        cout<<"press 1 to update balance"<<endl;
        cout<<"press 2 to deposit money"<<endl;
        cout<<"press 3 to withdraw money"<<endl;
        cout<<"press 4 to see interest"<<endl;
        cout<<"press 5  to see balnce"<<endl;
        cin>>z;
        switch (z)
        {
            case 1: c.getdat();
            break;
            case 2: c.deposit();
            break;
            case 3: c.withdrawal();
            break;
            case 4: c.intrest();
            break;
            case 5: c.seebalance();
            break;
            default: cout<<"wrong choice";
            break;

        }

        cout<<"do you want to continue?";
        cout<<"press 1";
        int w;
        cin>>w;
        if (w==1)
        goto y;
        
        

    }


}


