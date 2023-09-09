#include<iostream>
using namespace std;
class rectangle{
public:
    int l;
    int b;
    rectangle(){
        l=7;
        b=8;
        }
        //Default parameter

        rectangle(int x, int y){
        l=x;
        b=y;
        }// parameter constructor

        rectangle(rectangle &r){
        l=r.l;
        b=r.b;
        } //copy constructor
};
int main(){
    rectangle r;
    cout<<r.l*r.b<<endl;

    rectangle r1(3,5);
    cout<<r1.l*r1.b<<endl;

    rectangle r2=r1;
    cout<<r2.l*r2.b<<endl;


}