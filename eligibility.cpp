#include<iostream>
using namespace std;

int main()
{
    double avg=0;
    double m1,m2,m3,m4,m5;
    double marks[5];
    bool eligibility = true;

    cout<<"Enter all 5 semester marks : \n";
    for(int i = 0; i<5; i++){
    cin>>marks[i];
    avg=avg+marks[i];

    }

    cout << "Your Marks are : \n";
     for(int i = 0; i<5; i++){
        cout <<marks[i] << "\n";
        if (marks[i]<60){
            eligibility = false;
        }

     }
    avg= avg/5;
    cout<<"Your average is" <<avg;

    if (avg>=70)
    {
        if (eligibility==false){
            cout<<"You aren't eligible"; 
        }
        else{
            cout<<"You are eligible";
        }
    }
    else{
        cout<<"You aren't eligible"; 
    }
    }