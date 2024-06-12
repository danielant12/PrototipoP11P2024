#ifndef PACIENTES_H
#define PACIENTES_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Menus.h"

using namespace std;

class Pacientes
{
   void insertarPacientes(string nombreUsuario);

    private:
       string idPaciente, nombrePaciente, Paciente;
};

#endif // RECETAS_H
