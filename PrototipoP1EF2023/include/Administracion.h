#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H
#include <iostream>
using namespace std;

class Administracion
{
    public:
        void menuGeneralSTAFF(string n);
        void catalogosSTAFF(string n);
        void procesoSTAFF(string n);
        void infomesSTAFF(string n);
        void puestos(string n);
        void reportesSTAFF(string n);
        void asignacionCursos(string n);
        void asignacion(string n);
    private:
        string nombre, nombre2, id, estudiante;
};

#endif // ADMINISTRACION_H
