/*
* Shaan Saini
* CIS 22A T/Th 3:30pm - 5:20pm
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double weight;
    string planet;

    const double MERCURY_MULT = 0.38;
    const double VENUS_MULT = 0.91;
    const double MARS_MULT = 0.38;
    const double JUPITER_MULT = 2.54;
    const double SATURN_MULT = 1.08;
    const double URANUS_MULT = 0.91;
    const double NEPTUNE_MULT = 1.19;
    const double PLUTO_MULT = 0.06;

    cout << "Welcome! This program can calculate how much you weigh on any of the planets in our solar system!\n";
    cout << "First, please enter your weight in pounds: ";
    cin >> weight;

    cout << "Next, select from one of the following planets: " << endl << "\tMercury\n\tVenus\n\tMars\n\tJupiter\n\tSaturn\n\tUranus\n\tNeptune\n\tPluto\n";

    cout << "Please enter the name of a planet: ";
    cin >> planet;

    if ((planet == "Mercury") || (planet == "mercury")) {
        weight = weight * MERCURY_MULT;
    } else if ((planet == "Venus") || (planet == "venus")) {
        weight = weight * VENUS_MULT;
    } else if ((planet == "Mars") || (planet == "mars")) {
        weight = weight * MARS_MULT;
    } else if ((planet == "Jupiter") || (planet == "jupiter")) {
        weight = weight * JUPITER_MULT;
    } else if ((planet == "Saturn") || (planet == "saturn")) {
        weight = weight * SATURN_MULT;
    } else if ((planet == "Uranus") || (planet == "uranus")) {
        weight = weight * URANUS_MULT;
    } else if ((planet == "Neptune") || (planet == "neptune")) {
        weight = weight * NEPTUNE_MULT;
    } else if ((planet == "Pluto") || (planet == "pluto")) {
        weight = weight * PLUTO_MULT;
    } else {
        cout << "\nYou entered an invalid name for a planet. Please re-run the program to try again." << endl;
        return 0;
    }

    cout << fixed << setprecision(1);
    cout << "You weigh " << weight << " pounds on " << planet << "." << endl;
}
