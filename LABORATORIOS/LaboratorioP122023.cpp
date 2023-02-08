#include <iostream>
using namespace std;

//Función para el Promedio
float promedio(float nota1,float nota2, float nota3, float nota4, float nota5)
	{float Promedio;
	Promedio = (nota1+nota2+nota3+nota4+nota5)/5;
	return (Promedio);
	}
//notas
int main()
{float nota1, nota2, nota3, nota4, nota5, i, n, notafinal;
cout<<"Ingrese cantidad de alumnos:";
cin>>n;

//Bucle para ingreso de 5 notas
for (i=1;i<=n;i++)
	{cout<<"\nIngrese nota 1: ";
	cin>>nota1;
	cout<<"Ingrese nota 2: ";
	cin>>nota2;
	cout<<"Ingrese nota 3:";
	cin>>nota3;
	cout<<"Ingrese nota 4:";
	cin>>nota4;
	cout<<"Ingrese nota 5:";
	cin>>nota5;
	notafinal = promedio(nota1,nota2,nota3,nota4,nota5);
	//Condicion si el alumno supera el 10.5 (Nota mínima)
	if (notafinal > 10.5)
		{cout<<"El alumno ha aprobado la materia.";
		}
	else
		cout<<"El alumno ha desaprobado la materia.";
	}
}
