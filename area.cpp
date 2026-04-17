#include <iostream>
using namespace std;

double perimeter(double side) { // perimeter function taking in side as parameter
    return 4 * side;//Perimeter of a square = side *4
}

double area(double side) { // area function taking in side as parameter
    return side * side; // area= side * side
}

int main() {
    double side = 0; //initialize variable side

    cout << "Enter the side of the square: ";
    cin >> side; //take input of user for variable side

    cout << "Perimeter of the square is " << perimeter(side) << endl;
    cout << "Area of the square is " << area(side) << endl;

    return 0;
}