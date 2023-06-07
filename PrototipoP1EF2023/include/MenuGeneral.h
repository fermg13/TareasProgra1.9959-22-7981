#ifndef MENUGENERAL_H
#define MENUGENERAL_H
#include <iostream>
using namespace std;

class MenuGeneral
{
    public:
        void menuGeneralSTAFF(string n);
        void catalogosSTAFF(string n);
        void procesoSTAFF(string n);
        void reportesSTAFF(string n);
        void asignacionCursos(string n);
        void asignacion(string n);
    private:
        string nombre, nombre2, id, estudiante;
};

#endif // MENUGENERAL_H
