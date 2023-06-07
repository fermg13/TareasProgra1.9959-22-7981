#include "Bitacora.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
#include <iomanip>

void Bitacora::ingresoBitacora(string nombre, string aplicacion, string accion)
{
    system("cls");
	fstream file;
	file.open("Bitacora.txt",ios::app | ios::out);
    time_t now = time(0);
    date_time = ctime(&now);
    file<<std::left<<std::setw(20)<< nombre<<std::left<<std::setw(15)<< aplicacion <<std::left<<std::setw(15)<< accion <<std::left<<std::setw(15)<< date_time;
    file.close();
}
void Bitacora::visualizarBitacora(string n)
{
    system("cls");
    string nombre = n;
    cout << "\n\t\t\t Usuario: " << nombre << "\n\n";
	fstream file;
	string texto;
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles de Bitacora - 1800 -------------------------"<<endl;
	file.open("Bitacora.txt",ios::in);
	file >> nombre >> aplicacion >> accion >> date_time;
    while(!file.eof())
    {
        total++;
        getline(file,texto);
        cout<<texto<<endl;
    }
    if(total==0)
    {
        cout<<"\n\t\t\tNo hay informacion...";
    }
    file.close();
    system ("pause");
}

