#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char letter;
    cout<<" Enter a character: ";
    cin>>letter;
    if (isupper(letter)){
        cout<<"Letter is in UPPER CASE"<<endl;
    }
    else if (islower(letter)){
        cout<<"Letter is in lowercase"<<endl;
    }
    else{
        cout<<"Enter an actual letter"<<endl;
    }
}