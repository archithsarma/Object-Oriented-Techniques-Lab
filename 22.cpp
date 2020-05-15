#include<iostream>
using namespace std;

class employee
{
	int   emp_num;
	char  emp_name[20];
	float emp_basic;
	float sal;
	float emp_da;
	float net_sal;
	float emp_it;

	public:

		void get_details();
		void find_net_sal();
		void show_emp_details();
};
void employee :: get_details()
{
	cout<<"\nEnter employee number:";
	cin>>emp_num;
	cout<<"\nEnter employee name:";
	cin>>emp_name;
	cout<<"\nEnter employee basic:";
	cin>>emp_basic;
}

void employee :: find_net_sal()
{
	emp_da=0.52*emp_basic;
	emp_it=0.30*(emp_basic+emp_da);
	net_sal=(emp_basic+emp_da)-emp_it;
}

void employee :: show_emp_details()
{
	cout<<"\n\n\nDetails of   :  "<<emp_name;
	cout<<"\n\nEmployee number:      "<<emp_num;
	cout<<"\nBasic salary     :  "<<emp_basic;
	cout<<"\nEmployee DA      :  "<<emp_da;
	cout<<"\nIncome Tax       :  "<<emp_it;
cout<<"\nNet Salary       :  "<<net_sal;
};

int main()
{
	employee emp[10];
	int i,num;

	cout<<"\nEnter number of employee details:";
	cin>>num;

	for(i=0;i<num;i++)
		emp[i].get_details();

	for(i=0;i<num;i++)
		emp[i].find_net_sal();

	for(i=0;i<num;i++)
		emp[i].show_emp_details();
	return 0;
}
