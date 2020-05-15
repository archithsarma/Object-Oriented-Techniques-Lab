#include<iostream>

using namespace std;

class Polygon 

{ 

protected: 

  float a,b; 

public: 

  void get_data() 

  { 

    cout<<"Enter dimensions,\n"; 

    cin>>a>>b; 

  } 

  virtual float area()=0;

}; 

class Rectangle:public Polygon 

{ 

public: 

  float area() 

  { 

    return (a*b); 

  } 

}; 

class Triangle:public Polygon 

{ 

public: 

  float area() 

  { 

    return (b*a/2); 

  } 

}; 

int main() 

{ 

  Rectangle r; 

  Triangle t; 

  Polygon *p; 

  p=&r; 

  p->get_data(); 

  cout<<"Area of rectangle: "<<p->area()<<"\n"; 

  p=&t; 

  p->get_data(); 

  cout<<"Area of triangle: "<<p->area()<<"\n"; 

}

 
