/*
Name: Nahimana Emable
Date: Sep 27, 2025
program: displays two random numbers to be added, waits then displays answer
*/
#include <iostream>
#include <random>
using namespace std;

int main(){

    int firstNumber, secondNumber, answer;
    string show;
    random_device myEngine;
    uniform_int_distribution<int> randomInt(0,900);

    firstNumber = randomInt(myEngine);
    secondNumber = randomInt(myEngine);
    answer = firstNumber + secondNumber;

    cout << " " << firstNumber << endl << "+";
    cout << " " << secondNumber << endl;
    cout << "______" << endl;
    cout << "press any button to reveal the answer: "; 
    cin >> show;
    cout << answer << endl;

    return 0;
}