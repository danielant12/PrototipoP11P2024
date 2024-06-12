#include "Pacientes.h"

void Recetas::insertarHabitaciones(string nombreUsuario)
{
    //string userName = nombreUsuario;
   // enviarDatosP.ingresoDatosBitacora(userName,"7200","ING");
    //string accion = "7001";
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Ingreso de Recetas -------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del paciente          : ";
	cin>>idReceta;
	cout<<"\t\t\tIngresa Nombre del Paciente       : ";
	cin>>nombreReceta;
	cout<<"\t\t\tIngresa telefono del paciente        : ";
	cin>>medicinaReceta;
	file.open("Recetas.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idHabitacion <<std::left<<std::setw(15)<< nombreHabitacion<< "\n";
	file.close();
}
