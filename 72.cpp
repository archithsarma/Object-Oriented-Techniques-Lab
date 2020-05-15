#include<iostream>

#include<fstream>

#define N 50

using namespace std;

class File

{

  int num[N],n;

  ifstream fin;

  ofstream fout;

public:

  File()

  {

    fin.open("NUMS.dat");

    fout.open("ARMS.dat");

  }

  ~File()

  {

    fin.close();

    fout.close();

  }

  void get_num()

  {

    cout<<"Numbers in NUMS.dat,\n";

    for(n=0;fin>>num[n];++n)

      cout<<num[n]<<"\n";

  }

  void find_arms()

  {

    int arms,temp;

    cout<<"Armstrong numbers in ARMS.dat,\n";

    for(int i=0;i<n;++i)

      {

	arms=0;

	temp=num[i];

	while(temp)

	  {

	    arms+=(temp%10)*(temp%10)*(temp%10);

	    temp/=10;

	  }

	if(arms==num[i])

	  {

	    cout<<arms<<"\n";

	    fout<<arms*arms<<"\n";

	  }

      }

  }

};

int main()

{

  int n,num;

  ofstream f("NUMS.dat",ios::trunc);

  cout<<"Enter the number of numbers: ";

  cin>>n;

  cout<<"Enter the numbers,\n";

  for(int i=0;i<n;++i)

  {

    cin>>num;

    f<<num<<"\n";

  }

  f.close();

  File obj;

  obj.get_num();

  obj.find_arms();

  return 0;

}
