#include<iostream>
//2. WAP to convert given degree celsius temperature into
//fahrenheit and convert that fahrenheit temperature
//into kelvin by implementing multilevel inheritance:
//Class P -> Class Q -> Class R
//- Class P has following members: temperature
//attribute in float
//- Class Q has following members: toFehrenheit()
//method
//- Class R has following members: toKelvin() method

using namespace std;
class P {
public:
    float temp;

    void celsius(float t) {
        temp = t;
    }
};

class Q : public P {
public:
    void toFahrenheit() {
        float fahrenheit;
        fahrenheit = temp * 1.8 + 32;
        cout << "Celsius to Fahrenheit: " << fahrenheit << endl;
    }
};

class R : public Q {
public:
    void toKelvin() {
        float kelvin;
        float fahrenheit;
        fahrenheit = temp * 1.8 + 32;
        kelvin = (fahrenheit + 459.67) * 5 / 9;
        cout << "Fahrenheit to Kelvin: " << kelvin << endl;
    }
};

int main() {
    float temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    R obj;

    obj.celsius(temperature);
    obj.toFahrenheit();
    obj.toKelvin();

    return 0;
}

