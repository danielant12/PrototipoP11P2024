//DANIEL ANTONIO CHACÓN MORATAYA
//9959-22-1827
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Función para generar puntuaciones aleatorias
int generarPuntuacion() {
    return rand() % 50 + 1;
}

// Función para calcular el promedio del un campeonato
double calcularPromedio(const vector<int>& puntuaciones) {
    int suma = 0;
    for (int puntuacion : puntuaciones) {
        suma += puntuacion;
    }
    return static_cast<double>(suma) / puntuaciones.size();
}

// Función para identificar el mejor campeonato y su promedio
pair<string, double> identificarMejorCampeonato(const vector<pair<string, vector<int>>>& campeonatos) {
    string mejorCampeonato = "";
    double mejorPromedio = 0;
    for (const auto& campeonato : campeonatos) {
        double promedio = calcularPromedio(campeonato.second);
        if (promedio > mejorPromedio) {
            mejorCampeonato = campeonato.first;
            mejorPromedio = promedio;
        }
    }
    return make_pair(mejorCampeonato, mejorPromedio);
}

int main() {
    srand(time(0));

//Ligas utilizadas y a las cuales vamos a calcularles las cosas aleatoriamente
//Usé vectores ya que es algo más sencillo y que puede resultar menos tardado

    vector<pair<string, vector<int>>> campeonatos = {
        {"Liga Nacional", vector<int>()},
        {"Liga de Ascenso", vector<int>()},
        {"Liga Segunda División", vector<int>()},
        {"Liga Tercera División", vector<int>()}
    };
//Iteraciones son los campeonatos que deseamos ver
    int iteraciones = 0;
    while (true) {
        cout << "Ingrese Campeonatos a ver: ";
        cin >> iteraciones;
        if (iteraciones == 0) {
            break;
        }

        for (int i = 0; i < iteraciones; ++i) {
            for (auto& campeonato : campeonatos) {
                campeonato.second.clear();
                for (int j = 0; j < 5; ++j) {
                    campeonato.second.push_back(generarPuntuacion());
                }
            }

            cout << "Campeonato a  evaluar: " << i + 1 << ":" << endl;
            for (const auto& campeonato : campeonatos) {
                cout << campeonato.first << ":" << endl;
                cout << "Puntuaciones: ";
                for (int puntuacion : campeonato.second) {
                    cout << puntuacion << " ";
                }
                cout << endl;
                cout << "Promedio: " << calcularPromedio(campeonato.second) << endl;
            }
            cout << endl;
        }

        pair<string, double> mejorCampeonato = identificarMejorCampeonato(campeonatos);
        cout << "El mejor campeonato es: " << mejorCampeonato.first << endl;
        cout << "Su promedio es: " << mejorCampeonato.second << endl;
        cout << endl;
    }

    return 0;
}
