#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //Conversion factors
    const double BTC_PER_Dollar = 0.000023, DOGE_PER_DOLLAR = 12.81;
    // Dollar amount to convert. btcAmount & dogeAmount
    int dollarAmount;
    double btcAmount, dogeAmount;
    
    cout << "Please enter a dollar amount to convert into Bitcoin and Dogecoin: " << endl;
    cin >> dollarAmount;

    // using conversion rates per dollar
    btcAmount = dollarAmount * BTC_PER_Dollar;
    dogeAmount = dollarAmount * DOGE_PER_DOLLAR;

    //output
    cout << "\nUsing the conversion rates of 2.3e-05 Bitcoin per dollar and 12.81 Dogecoin per dollar:" << endl << "\n";
    cout << dollarAmount << " dollars = " << fixed << setprecision(3) << btcAmount << " Bitcoin." << endl;
    cout << dollarAmount << " dollars = " << fixed << setprecision(3) << dogeAmount << " Dogecoin." << endl;

    return 0;
}