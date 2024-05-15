/*
Realizar un programa que calcule
el indice de masa corporal o IMC
*/

// We adding library for out and in data
#include <iostream>

using namespace std;

// principal function
int main(){
    float weight = 0;
    float height = 0;
    float result = 0;


    // weight data
    cout << "Indice de Masa Muscular Corporal (IMC)\n";
    cout << "Ingrese su peso en kilogramos: ";
    cin >> weight;

    // height data
    cout << "Ingrese su altura en metros: ";
    cin >> height;

    // calculate

    cout << "Su IMC es de: " << result =  weight / height * 2 << endl;


    return 0;
}
