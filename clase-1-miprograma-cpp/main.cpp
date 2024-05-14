#include <iostream>

// Declarando constante:
#define PI 3.1416

using namespace std;

int main()
{
    /*
    int entero = 44;

    // float recibe hasta 5 cifras despues del 0, si le ponemos mas, nos va a aproximar a ese numero.
    float flotante = 4.22337;

    // double puede tener hasta 4 cifras despues de la coma
    double doble = 3.1416;

    // variables de tipo Char es para un solo caracter, si ponemos mas de una nos mostrara la ultima letra
    char letra = 'A';

    // variable de tipo bool
    bool booleano = true;

    cout << "Numemeros flotantes con float, hasta 5 cifras despues de la coma, si tiene mas, se aproximara a ese numero: \n" << flotante << endl;
    cout << "- Es recomendable double, si queremos 4 numeros despues de la coma para un sistema optimo" << endl;
    cout << "Numeros hasta 4 numeros despues de la coma se hacen con double: \n" << doble << endl;
    cout << "Usamos char para las variables que contienen una sola letra: \n" << letra <<endl;
    cout << "Usamos bool para variables de tipo true = 1 or false = 0\n" << booleano <<endl;

    // ------------- 2do ejericio

    int n1,n2, r;
    cout << "Ingrese un numeros por favor..." << endl;
    cin >> n1;
    cout << "Ingrese otro por favor...."<< endl;
    cin >> n2;

    r = n1 - n2;
    cout << "El resultado es: " << r << endl ;

    // ---------- 3er ejericio

    */

    float altura = 1.79;

    // Declaramos una constante con el nombre en mayus, por convesion
    const float GRAVEDAD = 4.5;

    cout << " - Variable sin modificar \nAltura: " << altura << endl;
    cout << " - Constante sin modificar \nGravedad:" << GRAVEDAD << endl;

    altura = 2.80;

    cout << " - Variable modificada \nAltura: "<< altura << endl;
    cout<< " - Si intento modificar la constante GRAVEDAD, el sistema no me va a compilar" << endl;

    return 0;
}
