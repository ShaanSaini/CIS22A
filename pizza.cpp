/*
* Shaan Saini
* CIS 22A T/Th 3:30 - 5:30pm
*/

#include <iostream>
#include <iomanip>
using namespace std;

/**

    calculates the tax at 8.5% and adds it to the price of the pizza


    @param pizza_price the price of the pizza
*/

void add_tax(double& pizza_price);

/**
    calls add_tax, calculate_tip and display_price
    to calculate and display the final price

    @param pizza_price the price of the pizza as entered by the user

*/

void calculate_bill(double& pizza_price);

/**
    calculates the bill at 15% and adds it to the price of the pizza


    @param pizza_price the price of the pizza

*/

void calculate_tip(double& current_bill);

/**
    formats and prints the total price of the pizza including tip and tax

    @param total_price the total price of the transaction

*/

void format_price(double& total_price);

int main()
{
    cout << "Welcome to Mama Domino's Pizzaria!\n";
    cout << "\nEnter the price of the pizza: ";
    double price;
    cin >> price;
    calculate_bill(price);

}

void add_tax(double& pizza_price)
{
    pizza_price *= 1.085;

}


void calculate_bill(double& pizza_price)
{
    add_tax(pizza_price);

    calculate_tip(pizza_price);

    format_price(pizza_price);

}

void calculate_tip(double& current_bill)
{
    current_bill *= 1.15;

}

void format_price(double& total_price)
{
    cout << fixed << setprecision(2);
    cout << endl << "With taxes and tip, your total comes to $" << total_price << endl;

}
