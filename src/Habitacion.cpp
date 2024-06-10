#include "Habitacion.h"

void Recetas::insertarHabitaciones(string nombreUsuario)
{
    //string userName = nombreUsuario;
   // enviarDatosP.ingresoDatosBitacora(userName,"7200","ING");
    //string accion = "7001";
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Ingreso de Recetas -------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Cliente          : ";
	cin>>idReceta;
	cout<<"\t\t\tIngresa Nombre del Cliente       : ";
	cin>>nombreReceta;
	cout<<"\t\t\tIngresa Habitacion elegida        : ";
	cin>>medicinaReceta;
	file.open("Habitacion.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idHabitacion <<std::left<<std::setw(15)<< nombreHabitacion<< "\n";
	file.close();
}
