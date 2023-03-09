
#include <iostream>
#include<string>

using namespace std;


struct datosestudiante
{
	string nombre;
	string apellidos;
	int edad;
	string sexo;
	string direccion;
	string telefono;

};


datosestudiante* estudiante = new datosestudiante[100];
int i;
int estudiantes;
int eliminado;
int mayor = 0;
int menor = 100;


void cantidad_estudiantes() {
	cout << "Ingrese la cantidad de estudiantes: ";
	cin >> estudiantes;

}
void captardatos()
{

	cout << "Ingrese el nombre: ";
	cin >> estudiante[i].nombre;
	cout << endl;
	/*cout << "Ingrese los apellidos: ";
	cin >> estudiante[i].apellidos;
	cout << endl;
	cout << "Ingrese la edad: ";
	cin >> estudiante[i].edad;
	cout << endl;
	cout << "Ingrese el sexo: ";
	cin >> estudiante[i].sexo;
	cout << endl;
	cout << "Ingrese la direccion: ";
	cin >> estudiante[i].direccion;
	cout << endl;
	cout << "Ingrese el telefono: ";
	cin >> estudiante[i].telefono;
	cout << endl;*/

}

void mostrar()
{
	cout << "LOS DATOS INGRESADOS SON: " << endl;
	cout << "El nombre es " << estudiante[i].nombre << endl;
	/*cout << "Los apellidos son: " << estudiante[i].apellidos << endl;
	cout << "La edad es: " << estudiante[i].edad;
	cout << endl;
	cout << "El sexo es: " << estudiante[i].sexo;
	cout << endl;
	cout << "La direccion es: " << estudiante[i].direccion;
	cout << endl;
	cout << "El telefono es: " << estudiante[i].direccion;
	cout << endl;*/


}

void eliminar() {



}
void mayoredad() {




}

int main()
{

	int opc, ed, n;
	i = 0;
	do
	{

		system("cls");

		cout << "                       Datos de Estudiantes " << endl;
		cout << "      Seleccione la opcion a realizar\n\n";
		cout << "      1.- Introducir Datos de Estudiantes\n";
		cout << "      2.- Mostrar los Estudiantes\n";
		cout << "      3.- Eliminar un estudiante\n";
		cout << "      4.- Obtener el estudiante de mayor edad de la lista de estudiantes\n";
		cout << "      5.- Obtener el estudiante de menor edad de la lista de estudiantes\n";
		cout << "      6.- Salir";
		cout << "       \n\n\nOpcion(1-6): ";
		cin >> opc;
		if (opc == 1)
		{
			cantidad_estudiantes();
			for (i = 0; i < estudiantes; i++)
			{
				system("cls");

				captardatos();

			}
			(void)getchar();
			(void)getchar();

		}
		else

			if (opc == 2)
			{
				system("cls");
				cout << "Mostrando los datos captados: " << endl;

				for (i = 0; i < estudiantes; i++)
				{
					mostrar();

				}
				(void)getchar();
				(void)getchar();


			}

			else if (opc == 3)
			{
				//cout << "Ingrese nombre";
				//cin >> eliminado;
				//for (i = 0; i < estudiantes; i++) {
				//	if (estudiante[i].nombre = eliminado) {   //0
				//		estudiante[i] = NULL;
				//	}

				//	(void)getchar();
				//	(void)getchar();
				//}

			}

				cout << "Elija el numero de estudiante que quiere eliminar: " << endl;
				cin >> eliminado;
				if ( eliminado ==estudiantes) {

					cout << eliminado + 1 << " -> " << estudiante[i].nombre << endl;
					estudiante[i].nombre = "";
				

				}

					(void)getchar();
				(void)getchar();
				string nombre;
				cout << "Nombre del estudiante a eliminar: ";
				cin >> nombre;
				bool encontrado = false;
				for (int i = 0; i < estudiantes.size(); i++) {
					if (estudiante[i].nombre == nombre) {
						estudiantes.erase(estudiantes.begin() + i);
						encontrado = true;
						break;
					}
				}
				/*if (encontrado) {
					cout << "Estudiante eliminado correctamente" << endl;
				}
				else {
					cout << "Estudiante no encontrado" << endl;
				}
			}*/

			}

			else if (opc == 4)
			{
				for (i = 0; i < estudiantes; i++) {
					if (estudiante[i].edad > mayor) {   //0
						mayor = estudiante[i].edad;
					}

				}
				cout << "\nEl estudiante de mayor edad tiene: " << mayor << endl;


				(void)getchar();
				(void)getchar();
			}

			else if (opc == 5) {

				for (i = 0; i < estudiantes; i++) {
					if (estudiante[i].edad < menor) {
						menor = estudiante[i].edad;
					}

				}
				cout << "\nEl estudiante de menor edad tiene: " << menor << endl;


				(void)getchar();
				(void)getchar();
			}
			else
			{
				exit(0);

			}



	/*} while ((opc != 6));











}*/