/*
Realizar un programa que calcule
el indice de masa corporal o IMC
*/

// We adding library for out and in data
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

// principal function
int main(){
    float weight = 0;
    float height = 0;
    float result = 0;

    //  I solved it this way

    /*
    // weight data
    cout << "Indice de Masa Muscular Corporal (IMC)\n";
    cout << "Ingrese su peso en kilogramos: ";
    cin >> weight;

    // height data
    cout << "Ingrese su altura en metros: ";
    cin >> height;

    // calculate

    result = weight / (height * height);
    */

    // The course used the math library and iomanip for decimal precision

    // weight data
    cout << "Indice de Masa Muscular Corporal (IMC)\n";
    cout << "Ingrese su peso en kilogramos: ";
    cin >> weight;

    // height data
    cout << "Ingrese su altura en metros: ";
    cin >> height;

    // calculate

    result = weight / pow(height,2);

    cout << "Su IMC es de: " << setprecision(4) << result << " kg/m^2" << endl;


    return 0;
}
