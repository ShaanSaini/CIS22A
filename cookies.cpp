/*
* Shaan Saini
* T / Th 3:30pm-5:20pm
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num_choc_chip;
    int num_choc_mint;
    int num_peanut_butter;
    int num_oatmeal_raisin;
    const double PRICE_CHOC_CHIP = 1.95;
    const double PRICE_CHOC_MINT = 2.15;
    const double PRICE_PEANUT_BUTTER = 2.05;
    const double PRICE_OATMEAL_RAISIN = 1.85;
    double total;

    cout << "Welcome to Cookie Magic, where every bite of cookie is magical!\n Allow me to assist you with your order. \n";
    cout << "\nWe sell the following flavors:\n";

    cout << "Chocolate Chip Cookies -- $1.95 each\n";
    cout << "Chocolate Mint Cookies -- $2.15 each\n";
    cout << "Peanut Butter Cookies -- $2.05 each\n";
    cout << "Oatmeal Raisin Cookies -- $1.85 each\n\n";

    cout << "Please enter the number of chocolate chip cookies you would like to purchase: ";
    cin >> num_choc_chip;
    cout << "Please enter the number of chocolate mint cookies you would like to purchase: ";
    cin >> num_choc_mint;
    cout << "Please enter the number of peanut butter cookies you would like to purchase: ";
    cin >> num_peanut_butter;
    cout << "Please enter the number of oatmeal raisin cookies you would like to purchase: ";
    cin >> num_oatmeal_raisin;
    cout << "\nYou ordered the following:\n";

    double choc_total = 1.95 * num_choc_chip;
    double mint_total = 2.15 * num_choc_mint;
    double peanut_total = 2.05 * num_peanut_butter;
    double oatmeal_total = 1.85 * num_oatmeal_raisin;

    cout << "Chocolate Chip Cookies: " << num_choc_chip << " @ " << PRICE_CHOC_CHIP << " each...    $" << choc_total << endl;
    cout << fixed << setprecision(2);

    cout << "Chocolate Mint Cookies: " << num_choc_mint << " @ " << PRICE_CHOC_MINT << " each...    $" << mint_total << endl;
    cout << fixed << setprecision(2);

    cout << "Peanut Butter Cookies: " << num_peanut_butter << " @ " << PRICE_PEANUT_BUTTER << " each...     $" << peanut_total << endl;
    cout << fixed << setprecision(2);

    cout << "Oatmeal Raisin Cookies: " << num_oatmeal_raisin << " @ " << PRICE_OATMEAL_RAISIN << " each...    $" << oatmeal_total << endl;
    cout << fixed << setprecision(2);

    total = choc_total + mint_total + peanut_total + oatmeal_total;
    cout << fixed << setprecision(2);

    cout << "\nTotal: \t\t\t\t\t    $" << total << endl << endl;
    cout << "Thank you for your order! Please come again!" << endl;
}
