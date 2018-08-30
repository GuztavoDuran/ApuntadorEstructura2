/*Punteros a estructura dentro de otra estructura*/
#include <iostream>
using namespace std;
struct Materia{
  int semestre;
  char nombreMateria[20];
  int promedio;
};
struct Alumno{
  int clave;
  char nombre [20];
  struct Materia unidad;
};
int main(int argc, char const *argv[]) {
  /* code */
  struct Alumno estudiante1;//se inicializa la estructura
  struct Alumno *Ptr;
  Ptr =& estudiante1;
  cout << "   INICIO  " << endl;
  cout << endl;
  /*estos datos se encuentran dentro de la estructura Alumno*/
  cout << "   Inserte clave:    " ; cin >> Ptr -> clave;
  cout << "   Inserte nombre:   " ; cin >> Ptr -> nombre;
  /*estos datos se encuentran dentro de la estructura Materia que se
  encuentra agregada en la estructura Alumno*/
  cout << "   Inserte semestre: " ; cin >> Ptr -> unidad.semestre;
  cout << "   Inserte materia:  " ; cin >> Ptr -> unidad.nombreMateria;
  cout << "   Inserte promedio: " ; cin >> Ptr -> unidad.promedio;
  /*se muestran los datos insertados*/
  cout << "\n Mostrando Datos" << endl;
  cout << "   Inserte clave:    " << Ptr -> clave << endl;
  cout << "   Inserte nombre:   " << Ptr -> nombre << endl;
  cout << "   Inserte semestre: " << Ptr -> unidad.semestre << endl;
  cout << "   Inserte materia:  " << Ptr -> unidad.nombreMateria << endl;
  cout << "   Inserte promedio: " << Ptr -> unidad.promedio << endl;
  cin.get();
  return 0;
}
