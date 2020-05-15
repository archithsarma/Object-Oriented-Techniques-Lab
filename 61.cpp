#include<iostream>
using namespace std;

class Swap
	{   
		public:	
	    	void swap_value(int a,int b)
			{   int c;
				c=a;
				a=b;
				b=c;
			cout<<"The value of a, b :   in function:"<<a<<"  "<<b;
			
			}
	        
	        void swap_reference(int &a,int &b)
			{
				int z;
				z=a;
			    a=b;
			    b=z;
			    cout<<"The value of a, b : in function:"<<a<<"  "<<b;
			}
	
			
			
			
			void swap_address(int *x,int *y)
			{
				int z;
				z=*x;
			    *x=*y;
			    *y=z;
			    cout<<"The value of a, b : in function:"<<*x<<"  "<<*y;
			}
	
	
	
	};
	
	int main()
	{
	Swap s;	
	int a,b,op,cont;
	int *x;
	int *y;
	do
	{ cout<<"Enter the value of a and b";
	  cin>>a>>b;
	 cout<<"1. CALL BY VALUE   2.CALL BY REFERENCE   3.CALL BY ADDRESS:";	
	 cin>>op;	
	 switch(op)
	 	{
	 	case 1:
		 { s.swap_value(a,b);
		   cout<<"The value of a, b :    outside function:"<<a<<"  "<<b;	 
		 break;}	
	 	case 2:
		  {
		
		  s.swap_reference(a,b);
		  cout<<"The value of a, b : outside function:"<<a<<"  "<<b;
		  break;}	
		 
		 case 3:
		  {
		  x=&a;	
		  y=&b;	
		  s.swap_address(x,y);
		  cout<<"The value of a, b :    outside function:"<<a<<"  "<<b;
		  break;}	
	 		
	 	}
	 	cout<<"   DYWTC??? 1 or 2:";
	 	cin>>cont;
		 		
		}	
		while(cont==1);	
		
	return 0;	
	}

