#include <iostream>
//#include <vector>

using namespace std;

template <class tipo_dato> void printVector(tipo_dato[], int);

int main() {

    int longitud;

    // Vector de enteros
    int v_enteros[] = {1, 2, 3, 4, 5};
    longitud = sizeof(v_enteros)/sizeof(*v_enteros);

    // Vector de float
    float v_float[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    longitud = sizeof(v_float)/sizeof(*v_float);

    // Vector de caracteres
    char v_string[] = {"hola"};
    longitud = sizeof(v_string)/sizeof(*v_string);

    // Llamamos a nuestra función a la que podemos introducirle un vector de cualquiera
    // de las clases anteriores
    printVector(v_enteros, longitud);
    printVector(v_float, longitud);
    printVector(v_string, longitud);
}

template <class tipo_dato>
void printVector(tipo_dato vector[], int longitud){
    cout<<"El vector modificado es: [ ";
    for (int i = 0; i<longitud; i++){
        cout<<vector[i]<<" ";
    }
    cout<<"]"<<endl<<endl;
}
