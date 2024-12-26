#include <iostream>
#include <ctime>

using namespace std;

class Auto {
    string brand;
    double percentageOfFuel;
    bool lights;

public:
    Auto() { 
        brand = "Renault";
        percentageOfFuel = 100;
        lights = false; 
    }

    Auto(string a, double b) { 
        brand = a;
        percentageOfFuel = b;
        lights = false;
    }

    void SetBrand(string a) {
        brand = a;
    }

    void SetPercentageOfFuel(double b) {
        percentageOfFuel = b;
    }

    string GetBrand() {
        return brand;
    }

    double GetPercentageOfFuel() {
        return percentageOfFuel;
    }

    void FillAuto(double a) {
        if ((percentageOfFuel + a) <= 100) {
            percentageOfFuel += a;
            cout << "Current percentage of fuel: " << percentageOfFuel << endl;
        }
        else {
            cout << "Percentage of fuel cannot exceed 100%. Try again." << endl;
        }
    }

    void Drive() {
        int fuelToFire = rand() % 25 + 1;
        percentageOfFuel -= fuelToFire;
        if (percentageOfFuel < 0) {
            percentageOfFuel = 0;
        }
        cout << "Drove the car. Fuel used: " << fuelToFire << ". Current fuel: " << percentageOfFuel << "%" << endl;
    }

    void Lights() {
        if (lights = true) {
            cout << "Lights are on now " << endl;
        }
        else {
            cout << "Lights are off now " << endl;
        }
    }
};

int main() {
    srand(time(NULL));
    Auto obj;

    while (true) {
        cout << "1 -> Fill\n2 -> Drive\n3 -> Turn on lights\n";
        int result;
        cin >> result;

        if (result == 1) {
            obj.FillAuto(35);
        }
        else if (result == 2) {
            obj.Drive();
        }
        else if (result == 3) {
            obj.Lights();
        }

        if (obj.GetPercentageOfFuel() <= 0) {
            cout << "The car is out of fuel." << endl;
            break;
        }
    }
}
