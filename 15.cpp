#include<iostream>
#include<math.h>
using namespace std;
class quadratic
{
int a,b,c,x,x1,x2;
public:

void quad()
{
cout<<"Enter the values of a b c ";
cin>>a>>b>>c;
x1=((-b+sqrt(b^2-4*a*c))/(2*a));
x2=((-b-sqrt(b^2-4*a*c))/(2*a));
cout<<"The roots are:"<<x1<<"AND"<<x2;
}

};

int main()
{
class quadratic q;
q.quad();
}

