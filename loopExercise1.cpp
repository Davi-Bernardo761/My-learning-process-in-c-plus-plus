//This program takes an integer given by the user and prints all integers from 0 up to that number.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int number;
    cout<<"Give me a number."<<endl;
    cin>>number;
    for (int counter = 0; counter <= number; counter++ ) {
        cout<<counter<<endl;
    }
    return 0;
}
