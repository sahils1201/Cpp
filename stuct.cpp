#include <iostream>
using namespace std;

struct Circle
{//All members are publc
    double r; void input() {
        cout<<"Enter radius";
        cin>>r;
    }
    void area(){
        double a=3.14*r*r;
        cout << a;
    }
};
    int main(){
    struct Circle c1;
    c1 .input();
    cout<<c1.r;
    c1.area();

    return 0;
}
