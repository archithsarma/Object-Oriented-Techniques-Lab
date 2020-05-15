#include<iostream>
using namespace std;

class Array
	{   
		public:
		void read(int a[],int n)
		{for(int i=0;i<n;i++)
			{
			cout<<" Enter the elements:";
			cin>>a[i];	
			}
		int max,min;
		max=a[0],min=a[0];
		for(int i=0;i<n;i++)
			{
			if(a[i]>max)
				max=a[i];
		    if(min>a[i])
		       min=a[i];		
			}	
	    cout<<"  The maximum and minimum element is:  "<<max<<" and "<<min;
		}
		
		
    };
    
    
    int main()
    {
	Array *ptr;	
    int a[100],n;	
    cout<<"Enter the size of the array:";
    cin>>n;
    ptr->read(a,n);	
	return 0;}

