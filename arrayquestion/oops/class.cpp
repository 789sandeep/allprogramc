#include<iostream>
using namespace std;
class table{
    public:
     int n=2;
};
int main(){
    table t1;
    t1.n;
    for(int  i=1; i<11; i++){
        cout<<i*t1.n<<endl;
    }
}