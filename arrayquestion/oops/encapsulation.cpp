#include<iostream>
using namespace std;
class rectangle{
    int x,y;
    public:
        void set(int n,int n1){
            x=n;
            y=n1;
        }

        int get(){
            return x*y;
        }
};

int main(){
    rectangle obj;
    obj.set(3,4);
    cout<<obj.get();
}