#include<iostream>
using namespace std;

int main ()
{
    int n;
    int factorial = 1;

    cout<<"Enter Positive number = ";
    cin>>n;

    for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

     cout<<"The facorial of "<< n <<" is "  << factorial <<endl;
     return 0;

 }
