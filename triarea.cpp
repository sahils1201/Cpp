#include <iostream>
using namespace std;

struct triangle
{//All members are public
    double h; 
    double b;
    void input(){
        cout<<"Enter height";
        cin>>h;
        cout<<"Enter base";
        cin>>b;  
    }
    void area()
    {
        double a=(h*b)/2;
        cout<< a;
    }
};
int main(){
    struct triangle t1;
    t1.input();
    // cout<<t1.h;
    // cout<<t1.b;
    t1.area();

    return 0;
}