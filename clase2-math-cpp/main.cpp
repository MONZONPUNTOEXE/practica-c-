#include <iostream>

// importamos la libreria math.h
#include <math.h>

using namespace std;

int main()
{   // declaramos las variables
    float a = 20;
    float b = 50;

    // for division and remainder
    int c = a;
    int d = b;

    cout << "a vale : " << a << endl;
    cout << "b vale : " << b << endl;
    cout << "\n";

    // suma
    cout << "Resultado de a + b: " << a + b << endl;
    // resta
    cout << "Resultado de a - b: " << a - b << endl;
    // Division
    cout << "Resultado de a / b: " << a / b << endl;
    // Multiplicacion
    cout << "Resultado de a * b: " << a * b << endl;
    // Restos
    cout << "Resultado de a % b: " << c % d << endl;

    // WE WRITE IT DYNAMICALLY

    int s = a + b;
    int subs = a - b;
    int mul = a * b;
    float div = a / b;
    int remainder = c % d;

        // IN THIS WAY WE WILL OBTAIN THE RESULT OF THE SUM

    cout << "La SUMA entre " << a << " y " << b << " es " << s << endl;

        // IN THIE WAY WILL WE OBTAIN THE RESULT OF THE SUBSTRACTION

    cout << "La RESTA entre " << a << " y " << b << " es " << subs << endl;

        // IN THIS WAY WE WILL OBTAIL THE RESULT OF THIS MULTIPLICATION

    cout << "La MULTIPLICACION entre " << a << " y " << b << " es " << mul << endl;

        // IN THIS WAY WE WILL OBTAIN THE RESULT OF THIS DIVISION

    cout << "La DIVISION entre " << a << " y " << b << " es " << div << endl;

            // IN THIS WAY WE WILL OBTAIN THE RESULT OF THIS REMAINDER

    cout << "El RESTO entre " << a << " y " << b << " es " << remainder << endl;

    return 0;
}
