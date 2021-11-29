#include<iostream>
using namespace std;

int main(){
int a,b;

char o;

cout<<"Enter number 1: ";
cin>>a;

cout<<"Enter number 2: ";
cin>>b;

cout<<"Numbers are "<<a<<" and "<<b;

cout<<"\nEnter an operator'+,-,/,*': ";
cin>>o;

    switch(o){

                case '+':
                    cout<<a+b;
                    break;


                case '-':
                    cout<<a-b;
                    break;


                case '*':
                    cout<<a*b;
                    break;


                case '/':
                    cout<<a/b;
                    break;


                default:
                        cout<<"Error";
    }



return 0;
}
