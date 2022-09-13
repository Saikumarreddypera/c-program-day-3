#include<iostream>
#include<stdio.h>
using namespace std;

class customer
{
        char nm[20];
        long phno;
    public:
        void acceptc()
        {
                cout<<"\n Enter Customer Name      :  ";
                cin>>nm;
                cout<<"\n Enter Customer Phone No. :  ";
                cin>>phno;
        }
        void dispc()
        {
                cout<<"\n Details of Customer \n";
                cout<<"\n ----------------------------------------\n";
                cout<<"\n Customer Name            :  "<<nm;
                cout<<"\n Customer Phone No.       :  "<<phno;      
        }
};
class deposit:public customer
{
        int accno, balance;
    public:
        void acceptd()
        {
                cout<<"\n Enter Customer A/c No    :  ";
                cin>>accno;
                cout<<"\n Enter Balance            :  ";
                cin>>balance;
        }
        void dispd()
        {
                cout<<"\n Customer A/c No          :  "<<accno;
                cout<<"\n Balance                  :  "<<balance;
                cout<<"\n ----------------------------------------\n";
        }
};
class borrow:public deposit
{
        int loan_no,loan_amt;
    public:
        void acceptb()
        {
                cout<<"\n Enter Loan No            :  ";
                cin>>loan_no;
                cout<<"\n Enter Loan Amount        :  ";
                cin>>loan_amt;
                cout<<"\n ----------------------------------------\n";
        }
        void dispb()
        {
                cout<<"\n Loan No                  :  "<<loan_no;
                cout<<"\n Loan Amount              :  "<<loan_amt;
                cout<<"\n ----------------------------------------\n";
        }
};
int main()
{
        borrow *b1;
        int n,i;
        cout<<"\n Enter No. of Customer Details You Want  :  ";
        cin>>n;
        b1=new borrow[n];
        for(i=0; i<n; i++)
        {
                b1[i].acceptc();
                b1[i].acceptd();
                b1[i].acceptb();
        }
        for(i=0; i<n; i++)
        {
                b1[i].dispc();
                b1[i].dispd();
                b1[i].dispb();
        }
        return 0;
}
