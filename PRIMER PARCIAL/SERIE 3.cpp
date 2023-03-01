#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include <string.h>

using namespace std;

// Constantes
const int NUMERO_EQUIPOS = 5;
const int NUMERO_ACTIVIDADES = 5;
const int MAX_1P_CALIFICACION = 50;
const int MIN_CALIFICACION = 0;
const int MAX_2P_CALIFICACION = 50;
const int MAX_3P_CALIFICACION = 50;
const int NUMERO_LIGAS = 3;

//Variables
int suma2;


// Funciones
void menuPrincipal();
void ingresoCalificaciones();
void sumaIndividual();
int busquedaAleatorios(int minimo, int maximo);
int busquedaAleatorios1(int minimo, int maximo);
int busquedaAleatorios2(int minimo, int maximo);
void ligaNacional();
void ligaAscenso();
void ligaSegunda();
void punteo();
void imprimirLineaMatriz();
void imprimirLineaMatriz2();
void imprimirMatrizLNacional(float nacionalMatriz[NUMERO_EQUIPOS+1][NUMERO_ACTIVIDADES+1]);
void imprimirMatrizLAscenso(float ascensoMatriz[NUMERO_EQUIPOS+1][NUMERO_ACTIVIDADES+1]);
void imprimirMatrizLSegunda(float segundaMatriz[NUMERO_EQUIPOS+1][NUMERO_ACTIVIDADES+1]);
void impresionResultadosLigas();
void promedioMayorNacional();
void promedioMayorAscenso();
void promedioMayorSegunda();
void promedioGeneralPorLigas();
void promedioGeneralLigas();

// Vectores y Matriz
string nacional[NUMERO_EQUIPOS] = {"EQUIPO 1","EQUIPO 2","EQUIPO 3","EQUIPOS 4","EQUIPO 5"};
string ascenso[NUMERO_EQUIPOS] = {"EQUIPO 1","EQUIPO 2","EQUIPO 3","EQUIPOS 4","EQUIPO 5"};
string segunda[NUMERO_EQUIPOS] = {"EQUIPO 1","EQUIPO 2","EQUIPO 3","EQUIPOS 4","EQUIPO 5"};
int lnac[NUMERO_EQUIPOS];
int lnac1[NUMERO_EQUIPOS];
int lnac2[NUMERO_EQUIPOS];
int acti[NUMERO_EQUIPOS];
int sumaNacional[NUMERO_EQUIPOS];
int lasc[NUMERO_EQUIPOS];
int lasc1[NUMERO_EQUIPOS];
int lasc2[NUMERO_EQUIPOS];
int acti1[NUMERO_EQUIPOS];
int sumaAscenso[NUMERO_EQUIPOS];
int lseg[NUMERO_EQUIPOS];
int lseg1[NUMERO_EQUIPOS];
int lseg2[NUMERO_EQUIPOS];
int acti2[NUMERO_EQUIPOS];
int sumaSegunda[NUMERO_EQUIPOS];
float nacionalMatriz[NUMERO_EQUIPOS+1][NUMERO_ACTIVIDADES+1];  //Matriz de 11 x 6
float ascensoMatriz[NUMERO_EQUIPOS+1][NUMERO_ACTIVIDADES+1];
float segundaMatriz[NUMERO_EQUIPOS+1][NUMERO_ACTIVIDADES+1];
float promedioGeneralNac, promedioGeneralAsc, promedioGeneralSeg;
int mayor, mayor1, mayor2;


int main()
{
    menuPrincipal();
    system("pause");
    return 0;
}
//Implementacion de funciones
void menuPrincipal()
{
    int opciones;
    bool repetir = true; //Para que regrese a menu
    do
    {
        system("cls");
        cout << "\n\n\t\t\tLIGAS" << endl;
        cout << "\t\t-------------------------------\n\n";
        cout << "\t1. EQUIPOS" << endl;
        cout << "\t2. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
            system("cls");
            int a;
            cout << "\n\tIngrese \"1\" para continuar y \"2\" para salir: ";
            cin >> a;
            while (a == 1)
            {
                system ("cls");
                srand(time(NULL));
                ingresoCalificaciones();
                imprimirMatrizLNacional(nacionalMatriz);
                imprimirMatrizLAscenso(ascensoMatriz);
                imprimirMatrizLSegunda(segundaMatriz);
                cout << endl;
                cout << "\t\tEQUIPO CON PROMEDIO MAYOR POR LIGA: " << endl << endl;
                promedioMayorNacional();
                promedioMayorAscenso();
                promedioMayorSegunda();
                cout << endl;
                cout << "\n\t\tPROMEDIO GENERAL POR LIGA: " << endl << endl;
                promedioGeneralPorLigas();
                promedioGeneralLigas();
                impresionResultadosLigas();
                imprimirLineaMatriz2();
                cout << "\n\t�Desea realizar otra prueba? \"1\" para continuar y \"2\" para salir: ";
                cin >> a;
            }
            break;
        case 2: repetir = false;
                break;
        }
    }while (repetir);
}
void ingresoCalificaciones()
{
    ligaNacional();
    ligaAscenso();
    ligaSegunda();
    punteo();
    system("pause>nul");
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + (rand()%(MAX_1P_CALIFICACION - MIN_CALIFICACION)); //Rango de 0 - 50 puntos
}
int busquedaAleatorios1(int minimo, int maximo)
{
    return minimo + (rand()%(MAX_2P_CALIFICACION - MIN_CALIFICACION)); //Rango de 0 - 50 puntos
}
int busquedaAleatorios2(int minimo, int maximo)
{
    return minimo + (rand()%(MAX_3P_CALIFICACION - MIN_CALIFICACION)); //Rango de 0 - 50 puntos
}
void ligaNacional()
{
    for(int i = 0; i < NUMERO_EQUIPOS; i++)
    {
        for (int x=0; x < 1; x++)
        {
            int numero = busquedaAleatorios(MIN_CALIFICACION, MAX_1P_CALIFICACION);
            lnac[i] = numero;
            nacionalMatriz[i][0] = lnac[i];
            int numero1 = busquedaAleatorios1(MIN_CALIFICACION, MAX_2P_CALIFICACION);
            lnac1[i] = numero1;
            nacionalMatriz[i][1] = lnac1[i];
            int numero2 = busquedaAleatorios2(MIN_CALIFICACION, MAX_3P_CALIFICACION);
            lnac2[i] = numero2;
            nacionalMatriz[i][2] = lnac2[i];
            int numero3 = busquedaAleatorios(MIN_CALIFICACION, MAX_1P_CALIFICACION);
            acti[i] = numero3;
            nacionalMatriz[i][3] = acti[i];
        }
    }
}
void ligaAscenso()
{
    for(int i = 0; i < NUMERO_EQUIPOS; i++)
    {
        for (int x=0; x < 1; x++)
        {
            int numero4 = busquedaAleatorios(MIN_CALIFICACION, MAX_1P_CALIFICACION);
            lasc[i] = numero4;
            ascensoMatriz[i][0] = lasc[i];
            int numero5 = busquedaAleatorios1(MIN_CALIFICACION, MAX_2P_CALIFICACION);
            lasc1[i] = numero5;
            ascensoMatriz[i][1] = lasc1[i];
            int numero6 = busquedaAleatorios2(MIN_CALIFICACION, MAX_3P_CALIFICACION);
            lasc2[i] = numero6;
            ascensoMatriz[i][2] = lasc2[i];
            int numero7 = busquedaAleatorios(MIN_CALIFICACION, MAX_1P_CALIFICACION);
            acti1[i] = numero7;
            ascensoMatriz[i][3] = acti1[i];
        }
    }
}
void ligaSegunda()
{
    for(int i = 0; i < NUMERO_EQUIPOS; i++)
    {
        for (int x=0; x < 1; x++)
        {
            int numero8 = busquedaAleatorios(MIN_CALIFICACION, MAX_1P_CALIFICACION);
            lseg[i] = numero8; //Se agrega numeros Random al vector
            segundaMatriz[i][0] = lseg[i];
            int numero9 = busquedaAleatorios1(MIN_CALIFICACION, MAX_2P_CALIFICACION);
            lseg1[i] = numero9; //Se agrega los numeros Random al vector
            segundaMatriz[i][1] = lseg1[i];
            int numero10 = busquedaAleatorios2(MIN_CALIFICACION, MAX_3P_CALIFICACION);
            lseg2[i] = numero10; //Se agregan los numeros random al vector.
            segundaMatriz[i][2] = lseg2[i];
            int numero11 = busquedaAleatorios(MIN_CALIFICACION, MAX_1P_CALIFICACION);
            acti2[i] = numero11; //Se incluyen los numeros random al vector
            segundaMatriz[i][3] = acti2[i];
        }
    }
}
void sumaIndividual()
{
        for(int i=0; i<NUMERO_EQUIPOS; i++)
    {
        //Suma de las ligas para encontrar el punteo
        sumaNacional[i] = lnac[i] + lnac1[i] + lnac2[i] + acti[i];
        sumaAscenso[i] = lasc[i] + lasc1[i] + lasc2[i] + acti1[i];
        sumaSegunda[i] = lseg[i] + lseg1[i] + lseg2[i] + acti2[i];
    }
}
void punteo()
{
    sumaIndividual();
    for(int i=0; i < NUMERO_EQUIPOS; i++)
    {
        for(int x=0; x<1; x++)
        {
            nacionalMatriz[i][4] = sumaNacional[i]; //Se incluye loz valores del punteo en la matriz
            ascensoMatriz[i][4] = sumaAscenso[i];
            segundaMatriz[i][4] = sumaSegunda[i];
        }
    }
}
void imprimirLineaMatriz() //para separar info
{
    //Linea de separaci�n para la matriz
    cout << ("+----------------------");
    for (int x=0; x < NUMERO_ACTIVIDADES + 1; x++)
    {
        cout << "-----------";
    }
    cout<< ("+\n");
}
void imprimirLineaMatriz2()
{
    //Linea separaciones de matrices
    cout << ("+_______________________");
    for (int x=0; x < NUMERO_ACTIVIDADES + 1; x++)
    {
        cout << "___________";
    }
    cout<< ("+\n");
}
void imprimirMatrizLNacional(float nacionalMatriz[NUMERO_EQUIPOS+1][NUMERO_ACTIVIDADES+1])
{
    cout << endl << "\t\t\t\tLIGA NACIONAL\n" << endl;
    imprimirLineaMatriz();
    cout << setw(20) << "EQUIPO" << setw(10) << "|" << setw(5);

    for (int x=0; x < 3; x++)
    {
        cout << "201" << setw(2) << x + 1 << setw(5) << "|" << setw(5);
    }
    cout << setw(7) << "2010" << setw(5) <<"|";
    cout << setw(8) << "PUNTEO" << setw(5) <<"|\n";

    imprimirLineaMatriz();
    for (int y=0; y < NUMERO_EQUIPOS; y++)
    {
        cout << setw(25) << nacional[y] << setw(5) << "|" << setw(7);
        for (int x=0;x < NUMERO_ACTIVIDADES; x++)
            {
                int calificacion = nacionalMatriz[y][x];
                cout << setw(6) << calificacion << setw(6) << "|"; //Se imprime completamente la matriz
            }
        cout << endl;
        imprimirLineaMatriz();
    }
    imprimirLineaMatriz2();
}
void imprimirMatrizLAscenso(float ascensoMatriz[NUMERO_EQUIPOS+1][NUMERO_ACTIVIDADES+1])
{
    cout << endl << "\t\t\t\tLIGA DE ASCENSO\n" << endl;
    imprimirLineaMatriz();
    cout << setw(20) << "EQUIPO" << setw(10) << "|" << setw(5);

    for (int x=0; x < 3; x++)
    {
        cout << "201" << setw(2) << x + 1 << setw(5) << "|" << setw(5);
    }
    cout << setw(7) << "ACT" << setw(5) <<"|";
    cout << setw(8) << "PUNTEO" << setw(5) <<"|\n";

    imprimirLineaMatriz();
    for (int y=0; y < NUMERO_EQUIPOS; y++)
    {
        cout << setw(25) << ascenso[y] << setw(5) << "|" << setw(7);
        for (int x=0;x < NUMERO_ACTIVIDADES; x++)
            {
                int calificacion1 = ascensoMatriz[y][x];
                cout << setw(6) << calificacion1 << setw(6) << "|"; //Se imprime completamente la matriz
            }
        cout << endl;
        imprimirLineaMatriz();
    }
    imprimirLineaMatriz2();
}
void imprimirMatrizLSegunda(float segundaMatriz[NUMERO_EQUIPOS+1][NUMERO_ACTIVIDADES+1])
{
    cout << endl << "\t\t\t\tLIGA SEGUNDA\n" << endl;
    imprimirLineaMatriz();
    cout << setw(20) << "EQUIPO" << setw(10) << "|" << setw(5);

    for (int x=0; x < 3; x++)
    {
        cout << "201" << setw(2) << x + 1 << setw(5) << "|" << setw(5);
    }
    cout << setw(7) << "ACT" << setw(5) <<"|";
    cout << setw(8) << "PUNTEO" << setw(5) <<"|\n";

    imprimirLineaMatriz();
    for (int y=0; y < NUMERO_EQUIPOS; y++)
    {
        cout << setw(25) << segunda[y] << setw(5) << "|" << setw(7);
        for (int x=0;x < NUMERO_ACTIVIDADES; x++)
            {
                int calificacion2 = segundaMatriz[y][x];
                cout << setw(6) << calificacion2 << setw(6) << "|"; //Se imprime completamente la matriz
            }
        cout << endl;
        imprimirLineaMatriz();
    }
    imprimirLineaMatriz2();
}
void promedioMayorNacional()
{
    for (int i=0; i<NUMERO_EQUIPOS; i++)
    {
        if(sumaNacional[i] > mayor)
        {
            mayor = sumaNacional[i];
        }
    }
    cout << "\t\tPromedio mayor de Liga Nacional: " << fixed << setprecision(2) << mayor << endl;
}
void promedioMayorAscenso()
{
    for (int i=0; i<NUMERO_EQUIPOS; i++)
    {
        if(sumaAscenso[i] > mayor1)
        {
            mayor1 = sumaAscenso[i];
        }
    }
    cout << "\t\tPromedio mayor de Liga de Ascenso: " << fixed << setprecision(2) << mayor1 << endl;
}
void promedioMayorSegunda ()
{
    for (int i=0; i<NUMERO_EQUIPOS; i++)
    {
        if(sumaSegunda[i] > mayor2)
        {
            mayor2 = sumaSegunda[i];
        }
    }
    cout << "\t\tPromedio mayor de Liga Segunda : " << fixed << setprecision(2) << mayor2 << endl;
}
void promedioGeneralPorLigas()
{
    float suma=0, suma1=0, suma2=0;
    for (int i=0; i<NUMERO_EQUIPOS; i++)
    {
    suma += sumaNacional[i];
    promedioGeneralNac = suma / NUMERO_EQUIPOS;
    suma1 += sumaNacional[i];
    promedioGeneralAsc = suma1 / NUMERO_EQUIPOS;
    suma2 += sumaAscenso[i];
    promedioGeneralSeg = suma2 / NUMERO_EQUIPOS;
    }
    cout << "\t\tPromedio General Liga Nacional: " << fixed << setprecision(2) << promedioGeneralNac << endl;
    cout << "\t\tPromedio General Liga Ascenso: " << fixed << setprecision(2) << promedioGeneralAsc << endl;
    cout << "\t\tPromedio General Liga Segunda: " << fixed << setprecision(2) << promedioGeneralSeg << endl;
}
void impresionResultadosLigas()
{
    if (promedioGeneralNac > promedioGeneralAsc && promedioGeneralSeg)
    {
        cout << "\n\t\tLa liga ganadora es: Nacional con " << mayor << endl;
    }
    else if (promedioGeneralAsc > promedioGeneralNac && promedioGeneralSeg)
    {
        cout << "\n\t\tLa liga ganadora es: Ascenso con " << mayor1 << endl;
    }
    else if (promedioGeneralSeg > promedioGeneralNac && promedioGeneralAsc)
    {
        cout << "\n\t\tLa liga ganadora es: Segunda con " << mayor2 << endl;
    }
}
void promedioGeneralLigas()
{
    int promedioLigas = (promedioGeneralNac+ promedioGeneralAsc + promedioGeneralSeg) / 3;
    cout << "\n\t\tEl promedio general de las ligas es de: " << fixed << setprecision(2) << promedioLigas << endl;
}


//PRIMER PARCIAL
//FERNANDA MARTINEZ
//9959-22-7981
//EL PROGRAMA Y VIDEO DE ENVIARON POR CORREO
