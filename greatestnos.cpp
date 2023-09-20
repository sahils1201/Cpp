#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Please enter three numbers to compare \n";
    cin >> a>>b>>c;
    cout<<"The sum of these numbers is "<<(a+b+c);

    if (a >= b && a >= c) 
    {
        cout << "\n" "The largest number is: " << a;
    } 
    else if (b >= a && b >= c) 
    {
        cout << "\n" "The largest number is: " << b;
    } 
    else 
    {
        cout << "\n" "The largest number is: " << c;
    }
    return 0;
}


