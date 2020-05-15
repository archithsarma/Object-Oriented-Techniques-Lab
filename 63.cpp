#include<iostream>
using namespace std;

class Employee
	{ 
         public:
         int id,bpay,age,exp;
 	 char name[20],desig[20];
	 void read1()
		{
		cout<<"Enter the name";
		cin>>name;
                cout<<"Enter the experience";
		cin>>exp;
                cout<<"Enter the id";
		cin>>id;
		cout<<"Enter the basic";
		cin>>bpay;
		cout<<"Enter the age";
		cin>>age;
		cout<<"Enter the desig";
		cin>>desig;
		}
		
       };

class otherincome:public virtual Employee
	{
 	public:
	int income;
	char source[20];

	void read2()
		{
		cout<<"Enter the income";
		cin>>income;
                cout<<"Enter the source";
		cin>>source;
		}


	};


class incremen:public virtual Employee
	{
         public:
	 int inc=0;
         void increment()
		{
                 if(exp>25)
			inc=inc+5000;
                 else if(exp<25)
			inc=inc+2000;

		}


	};

class netsalary:public otherincome,public incremen
	{
         public:
	 int totalsal;
	 void totalsalary()
		{
                 totalsal=bpay+income+inc;
		 

		}
         void disp()
		{
		cout<<" Name "<<name;
                cout<<" Experience "<<exp;
                cout<<" id "<<id;
		cout<<" Basic"<<bpay;
		cout<<"  Age  "<<age;
		cout<<"  Desig  "<<desig;
		cout<<"  Income "<<income;
		cout<<"  Source  "<<source;
		cout<<"Total salary is:"<<totalsal;
                }


       };


int main()
{
int cont;
do

{netsalary n;
n.read1();
n.read2();
n.increment();
n.totalsalary();
n.disp();
cout<<"Continue 1 or 2?";
cin>>cont;
}
while(cont==1);
return 0;
}


