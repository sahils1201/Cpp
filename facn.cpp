#include<iostream>

int main ()
{
    int n;
    int factorial = 1;

    std::cout<<"Enter Positive number = ";
    std::cin>>n;

    for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

     std::cout<<"The facorial of "<< n <<" is "  << factorial << std::endl;
     return 0;

 }
