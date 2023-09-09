// compile time polymorphism example
#include<iostream>
using namespace std; 

// class parent{
// public:
//  void add(int x, int y){
//     cout<<x+y<<endl;
//  }
//  void add(int x, int y, int z){
//     cout<<x+y+z;
//  }
// };
// int main(){
//   parent obj;
//   obj.add(2,3);
//   obj.add(3,4,5);
// }

// Run time polymorphism example

class parent{
public:
  virtual void add(int x, int y){
    cout<<x+y<<endl;
 }
  void sub(int x, int y, int z){
    cout<<x+y+z;
 }
};

class child: public parent{
public:
 void add(int x, int y){
    cout<<x-y<<endl;
 }
 void sub(int x, int y, int z){
    cout<<x-y-z;
 }
};

int main(){
  parent *obj1;
  child obj;
  obj1=&obj;
  obj1->add(2,3);
  obj1->sub(3,4,5);
}

