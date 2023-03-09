#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definir la estructura de un estudiante
struct Estudiante {
    string nombre;
    int edad;
    string carrera;
};

// Función para imprimir los datos de un estudiante
void imprimirEstudiante(Estudiante estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Carrera: " << estudiante.carrera << endl;
}

int main() {
    vector<Estudiante> estudiantes;

    int opcion = 0;
    int cantidad;
    while (opcion != 6) {
        // Mostrar el menú de opciones
        cout << "1. Insertar estudiante" << endl;
        cout << "2. Eliminar estudiante" << endl;
        cout << "3. Buscar estudiante" << endl;
        cout << "4. mostrar lista : " << endl;
        cout << "5. estudiante con mayor edad : " << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

       
        if (opcion == 1) {
            // Insertar un nuevo estudiante
            cout << "inserte cantdiad de estudiantes:  "; cin >> cantidad;
            for (int i = 1; i <= cantidad; i++) {
                Estudiante estudiante;
            cout << "Nombre: ";
            cin >> estudiante.nombre;
            cout << "Edad: ";
            cin >> estudiante.edad;
            cout << "Carrera: ";
            cin >> estudiante.carrera;
           estudiantes.push_back(estudiante);
            cout << "Estudiante insertado correctamente" << endl;
            cout << endl;
            }
           
        } 
      
        else if (opcion == 2) {
            // Eliminar un estudiante por su nombre
            string nombre;
            cout << "Nombre del estudiante a eliminar: ";
            cin >> nombre;
            bool encontrado = false;
            for (int i = 0; i < estudiantes.size(); i++) {
                if (estudiantes[i].nombre == nombre) {
                    estudiantes.erase(estudiantes.begin() + i);
                    encontrado = true;
                    break;
                }
            }
            if (encontrado) {
                cout << "Estudiante eliminado correctamente" << endl <<endl;
                cout << endl;
            }
            else {
                cout << "Estudiante no encontrado" << endl;
            }
        }
        else if (opcion == 3) {
            // Buscar un estudiante por su nombre
            string nombre;
            cout << "Nombre del estudiante a buscar: ";
            cin >> nombre;
            bool encontrado = false;
            for (int i = 0; i < estudiantes.size(); i++) {
                if (estudiantes[i].nombre == nombre) {
                    imprimirEstudiante(estudiantes[i]);
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                cout << "Estudiante no encontrado" << endl;
            }
        }
        // mostrar la lista de estudaantes
        if (opcion == 4) {
            for (int i = 0; i < estudiantes.size(); i++) {
                cout << i+1<<" nombre es :  " << estudiantes[i].nombre << "      ";
                cout << "edad : " << estudiantes[i].edad <<"           ";
                cout << " carrera : " << estudiantes[i].carrera << endl;


                cout << "    " << endl;
                cout << " " << endl;
            }


        }
        // estudiante con mayor edad
        if (opcion == 5) {


            int cont = 0;
            string nombre;
            for (int i = 0; i < estudiantes.size(); i++) {

                if (cont < estudiantes[i].edad)
                {

                    cont = estudiantes[i].edad;
                    nombre = estudiantes[i].nombre;
                }

            }
            cout << endl << " el estudante con mayor edad es : " << nombre << " con una edad de : " << cont << " años  " << endl;
            cout<< endl;
        } 
        else if (opcion == 6) {
            // Salir del programa
            cout << "Adios" << endl;
        }
        else {
            cout << "Opcion no valida" << endl;
        }
    }

    return 0;
}