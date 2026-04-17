#include <iostream>
using namespace std;

int main(){
    int days = 0; //number of days
    int seconds = 0;//number of seconds
    cout << "How many days?";
    cin >> days;// taking the number of days
    seconds = days * 24 * 60 * 60;// calculating seconds in the days
    cout<<"There are "<<seconds<<" seconds in "<<days<<"days";
    return 0;


}