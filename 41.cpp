#include<iostream>
using namespace std;
class Student
{
public:
int rollno;
void read()
 {
 cout<<"Enter the roll no;";
 cin>>rollno;

 }
};

class Subject:virtual public Student
{
public:
int n;
int score[20];
void read1()
 {
  cout<<"Enter the no of subjects";
  cin>>n;
  for(int i=0;i<n;i++)
   {
    cout<<"Enter marks of "<<i+1<<" subject";
    cin>>score[i];
   }
 }
};

class Sports:virtual public Student
{
public:
int m;
int score1[20];
void read2()
 {
  cout<<"Enter the no of sports";
  cin>>m;
  for(int i=0;i<m;i++)
   {
    cout<<"Enter marks of "<<i+1<<" sport";
    cin>>score1[i];
   }
 }
};
class Result:public Subject,public Sports
{
public:
int resultsub,resultsspo,results1,results2;
Result():results1(0),results2(0)
{}
void add1()
 	{      for(int i=0;i<n;i++)
 		{

  			results1=results1+score[i];
 		}
        }
void add2()
 	{	for(int i=0;i<m;i++)
          	{

  			results2=results2+score1[i];
 		}
         }
void display()
 	{
	cout<<"The results are "<<results1<<" and "<<results2;
	}
};

int main()

{
Result r;
r.read();
r.read1();
r.read2();
r.add1();
r.add2();
r.display();
return 0;
}

























