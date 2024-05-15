#include <iostream>

using namespace std;

int main()
{
    /*
    int a,b,c,d;
    bool response;

    a = 16;
    b = 13;
    c = 46;
    d = 78;

    if (a > b){
        cout <<a<<"Es mayor a "<<b;
    }else{
        cout <<a<< " Es menor a " << b;
    };


    // -------- Exercise 2
    int user = 0;

    cout << "Ingrese su edad si quiere entrar a la discoteca: " << endl;
    cin >> user;

    if (user >= 18){
        cout << "Ingrasa al boliche";
    }else{
        cout << "No ingresa al boliche perro ";
    }
    */
    // -------- Exercise 3

    int user;

    cout << "Cuantas horas trabajas ?" << endl;
    cin >> user;

    if (user <= 5){
        cout << "Usted gano $10usd";
    }else if (user > 5 && user <= 12){
        cout << "Usted gano $15usd";
    }else{
        cout << "Usted gano $20usd";
    }



    return 0;
}
