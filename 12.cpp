#include<iostream>
using namespace std;
class p
{
int n,num,digit,rev=0;
public: 

void pallindrome()
{
cout<<"Enter the number";
cin>>num;
n=num;
while(num!=0)
 { 
   digit=num%10;
   rev=(rev*10)+digit;
   num=num/10;
  
 }
if(n==rev)
 cout<<"NUMBER IS A PALLINDROME";
else
 cout<<"Not a pallindrome";
}

};

int main()
{
class p p1;
p1.pallindrome();
return 0;

}
