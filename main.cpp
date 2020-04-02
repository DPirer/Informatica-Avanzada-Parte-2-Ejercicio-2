// EJERCICIO 2

// AUTOR: PEDRO ESTÉVEZ

/* Escribir una función printVector que acepte un vector de cualquier clase y muestre
todos sus elementos por pantalla, separados por un espacio. Si el vector está vacío
mostrar en pantalla ‘[vector vacío]’. La función devolverá el número de elementos del
vector.*/

#include <iostream>
#include <vector>

using namespace std;

// Creamos una plantilla para la función printVector de forma que
// podamos introducirle distintos tipos de datos
template <class tipo_dato>
void printVector(vector<tipo_dato>);

int main() {

    // Vector de enteros
    vector <int> v_enteros(5,1);

    // Vector de float
    vector <float> v_float(5,1.5);

    // Vector de caracteres
    vector <char> v_char = {'h', 'o', 'l', 'a'};

    // Llamamos a nuestra función para cada tipo de dato
    printVector(v_enteros);
    printVector(v_float);
    printVector(v_char);
}

// Y la función recorre el vector imprimiendo los valores con un espacio
// No se puede usar un iterador porque habría que decirle qué tipo de
// dato es, resultando en un error para el resto de datos
template <class tipo_dato>
void printVector(vector<tipo_dato> v){
    cout<<"El vector modificado es: [ ";
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"]"<<endl<<endl;
}
