#include<iostream>
using namespace std;

int main(){

    char l; //l equals a letter

    cout<<"Enter a lowercase English letter: ";
    cin>>l;

    switch(l){
                case 'a':
                    cout<<"a is a vowel";
                    break;

                case 'e':
                    cout<<"e is a vowel";
                    break;

                case 'i':
                    cout<<"i is a vowel";
                    break;

                case 'o':
                    cout<<"o is a vowel";
                    break;

                case 'u':
                    cout<<"u is a vowel";
                    break;


                default:
                    cout<<l<<" is not a vowel";

   }





return 0;
}
