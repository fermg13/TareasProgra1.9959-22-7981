/*#include "MenuGeneral.h"
#include "Usuario.h"
#include "Bitacora.h"
#include <ctime>
#include <fstream>
#include <iomanip>
Bitacora llamarBitacora2;
Usuario ingresoUsuario;

void MenuGeneral::menuGeneralSTAFF(string n)
{
    system("cls");
    int choice1;
    nombre = n;
	do
    {
	system("cls");
	cout << "\n\t\t\t Usuario: " << nombre << "\n\n";
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   MARIA FERNANDA MARTINEZ GONZALEZ | 9959-22-7981 |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
    cout<<"\t\t\t |   MENU GENERAL |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1). Catalogos "<<endl;
	cout<<"\t\t\t 2). Procesos"<<endl;
	cout<<"\t\t\t 3). Informes"<<endl;
	cout<<"\t\t\t 4). Salir del sistema"<<endl;
    cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger: 1-2-3-4 "<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice1;

    switch(choice1)
    {
    case 1:
        catalogosSTAFF(nombre);
		break;
	case 2:
	    procesoSTAFF(nombre);
		break;
	case 3:
	   reportesSTAFF(nombre);
		break;
    case 4:
		return;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
	system("cls");
    }while(choice1!= 8);
}
void MenuGeneral::procesoSTAFF(string n)
{
    nombre = n;
    int choice;
    do {
	system("cls");
	cout << "\n\t\t\t Usuario: " << nombre << "\n\n";
	cout<<"\t\t\t----------------------------------------------------"<<endl;
	cout<<"\t\t\t |   Proceso - 1200 |"<<endl;
	cout<<"\t\t\t----------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Asignación de cursos "<<endl;
	cout<<"\t\t\t 2. Bitacora "<<endl;
	cout<<"\t\t\t 3. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger: 1-2-3 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
                asignacionCursos(nombre);
                break;
            case 2:
                llamarBitacora2.ingresoBitacora(nombre,"1400", "REA");
                llamarBitacora2.visualizarBitacora(nombre);
                break;
            case 3:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    }while(choice!=3);
}
void MenuGeneral::asignacionCursos(string n)
{
    nombre = n;
    int choice;
    do {
	system("cls");
	cout << "\n\t\t\t Usuario: " << nombre << "\n\n";
	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   ASIGNACIÓN Y ESTUDIANTES  - 1201 |"<<endl;
	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Asignacion "<<endl;
	cout<<"\t\t\t 2. Estudiantes "<<endl;
	cout<<"\t\t\t 3. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger: 1-2-3-4-5-6 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
                asignacion(nombre);
                break;
            case 2:
                ingresoUsuario.menuSecundario();
                break;
            case 3:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    }while(choice!= 3);
}
void MenuGeneral::asignacion(string n)
{
	system("cls");
	nombre2 = n;
	cout << "\n\t\t\t Usuario: " << nombre2 << "\n\n";
	fstream file;
	cout<<"\n-----------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar detalles de Aplicacion ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id de la asignacion         : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre de la asignacion     : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa nombre de estudiante   : ";
	cin>>estudiante;
	file.open("Asignaciones.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< estudiante << "\n";
	file.close();
}
void MenuGeneral::catalogosSTAFF(string n)
{
    nombre = n;
    int choice;
    do {
	system("cls");
	cout << "\n\t\t\t Usuario: " << nombre << "\n\n";
	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   Catalogos  - 1300 |"<<endl;
	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Alta "<<endl;
	cout<<"\t\t\t 2. Baja "<<endl;
	cout<<"\t\t\t 3. Modificaciones "<<endl;
    cout<<"\t\t\t 4. Lectura "<<endl;
    cout<<"\t\t\t 5. Reporte "<<endl;
	cout<<"\t\t\t 6. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger: 1-2-3-4-5-6 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
               // puestos(nombre);
                break;
            case 2:
              //  funcionesAplicaciones.menu(nombre);
                break;
            case 3:

                break;
            case 4:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    }while(choice!= 4);
}
void MenuGeneral::reportesSTAFF(string n)
{
    nombre = n;
    int choice;
    do {
	system("cls");
	cout << "\n\t\t\t Usuario: " << nombre << "\n\n";
	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL STAFF -   Informes  - 1400 |"<<endl;
	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Bitacora "<<endl;
	cout<<"\t\t\t 2. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:1-2 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
                llamarBitacora2.ingresoBitacora(nombre,"1400", "REA");
                llamarBitacora2.visualizarBitacora(nombre);
                break;
            case 2:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    }while(choice!= 3);
}
void Administracion::puestos(string n)
{
    nombre = n;
    int choice;
    do {
	system("cls");
	cout << "\n\t\t\t Usuario: " << nombre << "\n\n";
	cout<<"\t\t\t---------------------------------------------------"<<endl;
	cout<<"\t\t\t |   PROGRAMA EMPRESARIAL STAFF -  Puestos - 1900 |"<<endl;
	cout<<"\t\t\t---------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Insertar Puesto "<<endl;
	cout<<"\t\t\t 2. Modificar Puesto "<<endl;
	cout<<"\t\t\t 3. Visualizar Puestos "<<endl;
	cout<<"\t\t\t 4. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger: 1-2-3-4 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
                llamarBitacora2.ingresoBitacora(nombre,"1900", "INS");
                mandarUsuario.ingresarPuesto(nombre);
                break;
            case 2:
                llamarBitacora2.ingresoBitacora(nombre,"1900", "UPD");
                mandarUsuario.modificarPuesto(nombre);
                break;
            case 3:
                llamarBitacora2.ingresoBitacora(nombre,"1900", "REA");
                mandarUsuario.visualizarPuesto(nombre);
                break;
            case 4:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    }while(choice!= 4);
}
*/
