#include<iostream>
using namespace std;
int main()
{
    int x;
    int revnum = 0;

    cout<<"Enter a number to Reverse ";
    cin>> x;
    while (x>0)
    {
        revnum= (revnum*10)+(x%10);
        x=x/10;
        
    }
    cout<<revnum;
    return 0;
    //For reversing number

}