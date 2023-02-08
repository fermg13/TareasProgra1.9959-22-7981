// Fecha de creación: Lunes 06-02-23
//Fecha de modificacion: Miércoles 08/02/23
// Este programa tiene como objetivo mostrar el uso de funciones a traves de una calculadora
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//Definicion de prototipos
void menuPrincipal();
void menuOperacionesBasicas();
void menuOperacionesExtendidas();
void factorial();
void porcentaje();
void elevaralcuadrado();
void elevaralcubo();
void raizcuadrada();
void sumar();
void restar();
void multiplicar();
void dividir();

int main() {
    menuPrincipal();
    return 0;
}
//Implementacion de funciones
void menuOperacionesExtendidas()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Operaciones Extendidas" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Factorial" << endl;
        cout << "\t2. Porcentaje" << endl;
        cout << "\t3. Elevar al cuadrado" << endl;
        cout << "\t4. Elevar al cubo" << endl;
        cout << "\t5. Raiz cuadrada" << endl;
        cout << "\t6. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                factorial();
                break;
        case 2:
                porcentaje();
                break;
        case 3:
                elevaralcuadrado();
                break;
        case 4:
                elevaralcubo();
                break;
        case 5:
                raizcuadrada();
                break;
        case 6: repetir = false;
                break;
        }
    } while (repetir);
}
void menuOperacionesBasicas()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Operaciones Basicas" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Sumar dos numeros" << endl;
        cout << "\t2. Restar dos numeros" << endl;
        cout << "\t3. Multiplicar dos numeros" << endl;
        cout << "\t4. Dividir dos numeros" << endl;
        cout << "\t5. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                sumar();
                break;
        case 2:
                restar();
                break;
        case 3:
                multiplicar();
                break;
        case 4:
                dividir();
                break;
        case 5: repetir = false;
                break;
        }
    } while (repetir);
}
void menuPrincipal()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMENU CALCULADORA" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Operaciones Basicas" << endl;
        cout << "\t2. Operaciones Extendidas" << endl;
        cout << "\t3. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                menuOperacionesBasicas();
                break;
        case 2:
                menuOperacionesExtendidas();
                break;
        case 3:
                repetir = false;
                break;
        }
    } while (repetir);
}
void factorial()
{
    system("cls");
    int numeroIngresado, i;
    float resultadoFactorial;
    cout << "\n\tCalculo del Factorial" << endl;
    cout << "\t\t\t-----------------" << endl;
    cout << "\n\tIngrese Numero: ";
    cin >> numeroIngresado;
    resultadoFactorial = 1;
    for (i=1; i <= numeroIngresado; i++)
    {
        resultadoFactorial = resultadoFactorial * i;
    }
    cout << "\t" << numeroIngresado << "! = " << resultadoFactorial << endl;
    system("pause>nul");
}
void porcentaje()
{
    system("cls");
    int primerNumero, segundoNumero;
    float resultadoPorcentaje;
    cout << "\n\tIngrese Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese Numero de Porcentaje %: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoPorcentaje = primerNumero * segundoNumero / 100;
    cout << "\tResultado del Porcentaje: " << resultadoPorcentaje << endl;
    system("pause>nul");
}
void elevaralcuadrado()
{
    system("cls");
    int primerNumero;
    float resultadoElevaralcuadrado;
    cout << "\n\tIngrese Numero: ";
    cin >> primerNumero;
    cout << "\n\t----------------------" << endl;
    resultadoElevaralcuadrado = primerNumero * primerNumero;
    cout << "\tResultado de Elevar al cuadrado (2): " << resultadoElevaralcuadrado << endl;
    system("pause>nul");
}
void elevaralcubo()
{
    system("cls");
    int primerNumero;
    float resultadoElevaralcubo;
    cout << "\n\tIngrese Numero: ";
    cin >> primerNumero;
    cout << "\n\t----------------------" << endl;
    resultadoElevaralcubo = primerNumero * primerNumero * primerNumero;
    cout << "\tResultado de Elevar al cubo (3): " << resultadoElevaralcubo << endl;
    system("pause>nul");
}
void raizcuadrada()
{
    int primerNumero;
    float resultadoRaiz;
    cout << "\n\tIngrese Numero: ";
    cin >> primerNumero;
    cout << "\n\t----------------------" << endl;
    resultadoRaiz = sqrt(primerNumero);
    cout << "\tResultado de la suma: " << resultadoRaiz << endl;
    system("pause>nul");
}
void sumar()
{
    int primerNumero, segundoNumero;
    float resultadoSumar;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoSumar = primerNumero + segundoNumero;
    cout << "\tResultado de la suma: " << resultadoSumar << endl;
    system("pause>nul");
}
void restar()
{
    int primerNumero, segundoNumero;
    float resultadoRestar;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoRestar = primerNumero - segundoNumero;
    cout << "\tResultado de la resta: " << resultadoRestar << endl;
    system("pause>nul");
}
void multiplicar()
{
    int primerNumero, segundoNumero;
    float resultadoMultiplicar;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoMultiplicar = primerNumero * segundoNumero;
    cout << "\tResultado de la multiplicacion: " << resultadoMultiplicar << endl;
    system("pause>nul");
}
void dividir()
{
    int primerNumero, segundoNumero;
    float resultadoDividir;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    if (segundoNumero == 0)
    {
        cout << "\tSegundo numero no puede ser cero (0) ERROR" << endl;
    } else
    {
        resultadoDividir = primerNumero / segundoNumero;
        cout << "\tResultado de la division: " << resultadoDividir << endl;
    }
    system("pause>nul");
}
