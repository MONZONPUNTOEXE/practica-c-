#include <iostream>

using namespace std;

int main()
{
    int option;
    int a = 0, b = 0;
    cout <<"Ingrese dos numeros enteros para luego operar"<< endl;
    cin >> a;
    cin >> b;

    cout << "Ingrese la operacion que desea realizar \n1 - Suma\n2 - Resta\n3 - Multiplicacion\n4 - Division \n" << endl;
    cin >> option;

    switch (option){
        case 1:
            cout << "Usted esta Sumando... Sus 2 numeros es igual a " << a + b << endl;
            break;
        case 2:
            cout << "Usted esta Restando... Sus 2 numeros es igual a " << a - b << endl;
            break;
        case 3:
            cout << "Usted esta Multiplicando... Sus 2 numeros es igual a " << a * b << endl;
            break;
        case 4:
            cout << "Usted esta Dividiendo... Sus 2 numeros es igual a " << a / b << endl;
            break;
    }

    return 0;
}
