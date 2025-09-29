/*
CONSOLE OUTPUT/TESTING RESULTS:


C++ SOURCE CODE:

    madLibs.cpp: this program takes a random number, name and color and generates a story
    Name: Nahimana Emable
    Date: Sep 28, 2025
*/
#include <iostream>
using namespace std;

int main(){

    int number;
    string name, color, animal;

    /// getting inputs
    cout <<"Enter a random number: ";
    cin >> number;
    cin.ignore();
    cout <<"Enter a random name: ";
    getline(cin,name);
    cout <<"Enter a random color: ";
    getline(cin,color);
    cout <<"Enter a random animal: ";
    getline(cin,animal);

    /// output
    cout << "\nWhen " << name << " was " << number << " years old he/she ate a " << color << " " << animal << endl;
    cout << name << " was so sick after, he threw up "<< color << " for hours!" << endl;


    return 0;
}