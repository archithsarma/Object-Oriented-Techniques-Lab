#include<iostream>
using namespace std;

class Side
{
protected:
int a=0,n;
public:

void read()
 {
 cout<<"Enter the number";
	cin>>a;
	
}	

	
};

class Square:public Side
{
public:	
void square1()
{
int c=a*a;
cout<<c<<"The sqaure";
	}	
	
};

class Cube:public Side
{
public:	
void cube1()
{
int c1=a*a*a;
cout<<c1<<"The cube";
	}	
	
};

int main()
{
int o;	
Cube c;
Square s;
cout<<"Square or cube to be calculated? 1 and 2";
cin>>o;
if(o==1)
 {s.read();
 s.square1();}
else
 {c.read();
 c.cube1();}
return 0;
}
