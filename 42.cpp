#include<iostream>
using namespace std;
class Shape
{
public:
	int b,h;
	void getdata1()
	{
		//cout<<"Enter length:";
		//cin>>l;
		cout<<"Enter breadth:";
		cin>>b;
		cout<<"Enter height:";
		cin>>h;

	}
      void getdata2()
	{
		//cout<<"Enter length:";
		//cin>>l;
		cout<<"Enter base:";
		cin>>b;
		cout<<"Enter height:";
		cin>>h;

	}
	
	
};
class Rectangle:public Shape
{
public:
    
    int area1;
    void disp1()
    {
	
	
	area1=(b*h)*0.5;
	cout<<"Area of traingle is:"<<area1<<endl;
    }

};
class Triangle:public Shape 
{
public:
    float area2;
    void disp2()
    {
	area2=b*h;
	cout<<"Area of rectangle is:"<<area2<<endl;
    }

};
int main()
{
	Triangle T;
	Rectangle R;
	int ch;
while(1)
{
cout<<"choose 1. triangle 2.rectangle 3.exit";
cin>>ch;



if(ch==1)
{
	R.getdata2();
	R.disp1();
}
else if(ch==2)
{
	T.getdata1();
	T.disp2();
}
else
	break;
}
	return 0;
}

