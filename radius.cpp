#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double radius = 0;//radius
    double  volume = 0;//volume
    const double PI = 3.141592653589793;// defining PI
    cout << "Choose the radius of the sphere: ";
    cin >> radius;// storing the value to the radius variable
    volume = (4.0/3.0) * pow(radius,3) * PI;
    cout<<"Volume of your sphere is "<<volume<<endl;
    return 0;

}