#include "MenuGeneral.h"
//#include "Usuario.h"
#include <ctime>
#include <fstream>
#include <iomanip>
Bitacora llamarBitacora2;
Aplicaciones funcionesAplicaciones;
InfoEmpleados InformacionEm;
Usuario ingresoUsuario;
Puestos mandarUsuario;
Calculos planilla;
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
	cout<<"\t\t\t | MARIA FERNANDA MARTINEZ GONZALEZ | 9959-22-7981 |"<<endl;
	cout<<"\t\t\t |                            |"<<endl;
	cout<<"\t\t\t |        MENU GENERAL        |"<<endl;
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
	    infomesSTAFF(nombre);
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
	cout<<"\t\t\t 1. Altas "<<endl;
	cout<<"\t\t\t 2. Bajas "<<endl;
	cout<<"\t\t\t 3. Modificaciones "<<endl;
	cout<<"\t\t\t 3. Lectura "<<endl;
	cout<<"\t\t\t 4. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger: 1-2-3-4-5 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
                puestos(nombre);
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
void MenuGeneral::procesoSTAFF(string n)
{
    nombre = n;
    int choice;
    do {
	system("cls");
	cout << "\n\t\t\t Usuario: " << nombre << "\n\n";
	cout<<"\t\t\t----------------------------------------------------"<<endl;
	cout<<"\t\t\t |   Catalogos - 1200 |"<<endl;
	cout<<"\t\t\t----------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Asignación de cursos "<<endl;
	cout<<"\t\t\t 2. Empleados "<<endl;
	cout<<"\t\t\t 3. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger: 1-2-3 "<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
                ingresoUsuario.menuSecundario();
                break;
            case 2:
                InformacionEm.menu(nombre);
                break;
            case 3:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    }while(choice!=3);
}
/*void MenuGeneral::infomesSTAFF(string n)
{
    nombre = n;
    int choice;
    do {
	system("cls");
	cout << "\n\t\t\t Usuario: " << nombre << "\n\n";
	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t |   Informes  - 1400 |"<<endl;
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
*/
