#include<iostream>
using namespace std;
class Complex
{
int img,real;
public:
void read()
{
 cout<<"Enter the value of img and real";
 cin>>img>>real;
 cout<<real<<"+ i"<<img<<"\n";
}

Complex operator +(Complex z)
{
 Complex temp;
 temp.real=real+z.real;
 temp.img=img+z.img;
 return temp;
}

void display()
{
 cout<<real<<"+i"<<img;
}
 };

int main()
{
 Complex c1,c2,c3;
 cout<<"Enter c1 and c2";
 cout<<"\n";
 c1.read();c2.read();
 c3=c1+c2;
 c3.display();
 return 0;
}
