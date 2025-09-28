# COSC 1436 — Assignment 3a  
**Instructor:** Prof. Duisheev  
**Points:** 10  

## Cryptocurrency Converter

This program converts U.S. dollars into two cryptocurrencies: **Bitcoin (BTC)** and **Dogecoin (DOGE)**.  

The program prompts the user for a whole number of dollars, applies the given exchange rates, and outputs the equivalent values in Bitcoin and Dogecoin with formatted precision.

---

## Requirements

- **Comment header** with name, date, and description. *(1 point)*  
- **Constants** for conversion rates:  
  - `BTC_PER_DOLLAR = 0.000023`  
  - `DOGE_PER_DOLLAR = 12.81`  
  *(2 points)*  
- **Variable** to hold user input for the dollar amount. *(1 point)*  
- **Formatted output** in fixed-point notation with 3 decimal places and forced decimal display.  
  - Calculate Bitcoin and Dogecoin amounts.  
  - Display results using variables, not hardcoded numbers. *(4 points)*  
- **Demonstration** using **500 dollars** as input. *(2 points)*  

---

## Example Run

Please enter a dollar amount to convert into Bitcoin and Dogecoin:
500

Using the conversion rates of 2.3e-05 Bitcoin per dollar and 12.81 Dogecoin per dollar:

500 dollars = 0.011 Bitcoin.
500 dollars = 6405.000 Dogecoin.