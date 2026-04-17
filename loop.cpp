#include <iostream>
using namespace std;

int main(){
    int numbers[5];
    int sum = 0;
    double average;
    
    for (int i=0; i<5; i++){
        cout<<"Enter a number: "<<endl;
        cin>>numbers[i];
        sum = sum + numbers[i];
    }

    average = sum/5.0;
    cout<<" Average of values:  "<<average<<endl;
    return 0;
}