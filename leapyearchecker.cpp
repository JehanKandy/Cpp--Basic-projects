#include<iostream>
using namespace std;

int main(){

    int year;

    cout<<"Enter a year: ";
    cin>>year;

    if((year%4)==0){
                        if((year%100)!=0){
                                cout<<year<<" is a leap year";
                        }

                         else if((year%400)==0){
                                cout<<year<<" is a leap year";
                         }

                         else {
                                cout<<year<<" is not a leap year";
                         }




    }




return 0;
}

/* Divisible by 4 and not by 100 : Yes Leap year

   Divisible by 4,100, and 400   : Yes Leap year
*/
