#include<iostream>

using namespace std;

int main() {
    int totalPeople;

    // Input: Number of individuals in the party
    cout << "Enter the number of individuals in the party: ";
    cin >> totalPeople;

    // Calculate the number of each type of pizza
    int largePizza = totalPeople / 8;
    int mediumPizza = (totalPeople / 8) / 6;
    int regularPizza = ((totalPeople / 8) % 6) / 4;
    int smallPizza = ((totalPeople / 8) % 6) % 4;

    // Output: Display the number of each type of pizza needed
    cout << "1. Large Pizza: " << largePizza << " slices\n";
    cout << "2. Medium Pizza: " << mediumPizza << " slices\n";
    cout << "3. Regular Pizza: " << regularPizza << " slices\n";
    cout << "4. Small Pizza: " << smallPizza << " slices\n";

    // Output: Display the total number of slices
    int totalSlices = (largePizza * 8) + (mediumPizza * 6) + (regularPizza * 4) + smallPizza;
    cout << "\nTotal Slices: " << totalSlices << endl;

    return 0;
}
