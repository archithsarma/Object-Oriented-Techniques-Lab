#include<iostream>
using namespace std;
class prime
{
int i, prim,upper,lower, n;
public:
void generator()
{
   
   cout<<" ENTER THE LOWER LIMIT : ";
   cin>>lower;
   cout<<"\n ENTER THE UPPER LIMIT : ";
   cin>>upper;
   cout<<"\n PRIME NUMBERS LIST IS : ";
   for(n=lower+1; n<upper; n++)
   {
     prim = 1;
     for(i=2; i<n/2; i++)
       if(n%i == 0)
       {
         prim = 0;
         break;
       }
     if(prim)
       cout<<n;
    }
}

};

int main()
{
class prime p;
p.generator();
return 0;


}




