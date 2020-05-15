#include <iostream>

#include <fstream>

using namespace std;

class Student

{

  int id,roll_no,m[3];

  fstream f;

  public:

  Student()

  {

    f.open("STUDENT.txt",ios::app);

  }

  ~Student()

  {

    f.close();

  }

  void get_data()

  {

    cout<<"Enter student id: ";

    cin>>id;

    cout<<"Enter roll number: ";

    cin>>roll_no;

    cout<<"Enter the marks for 3 subjects,\n";

    for(int i=0;i<3;++i) cin>>m[i];

  }

  void write_file()

  {

    f.write((char *)this,sizeof(Student));

  }

  void get_file()

  {

    f.read((char *)this,sizeof(Student));

    this->display();

  }

  void display()

  {

    cout<<"Student id: "<<id<<"\n"

	<<"Roll number: "<<roll_no<<"\n"

	<<"Marks: "<<m[0]<<" "<<m[1]<<" "<<m[2]<<"\n";

  }

};

  

int main()

{

  Student s;

  int ch=1;

  do

    {

      if(ch==0) return 0;

      else

	{

  s.get_data();

  s.write_file();

  s.get_file();

	}

      cout<<"\nDo you want to continue(1/0): ";

      cin>>ch;

    }while(1);

  return 0;

}
