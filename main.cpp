#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// funcion para crear un archivo
void crearArchivo(string nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
         cout << "Archivo " <<nombreArchivo << " creado exitosamente." <<endl;
    } else {
    cout << "error al crear el arcivo." <<endl;
    }
    archivo.close();
}

// funciones para editar un archivo
 void editarArchivo(string nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        vector<string> lineas;
        string linea;
        while (getline(archivo, linea)) {
            lineas.push_back(linea);
        }
        archivo.close();

// Mostrar el contenido del archivo
for (string linea : lineas) {
    cout << linea << endl;
}

//Editar el contenido del archivo
cout << "introduzca las nuevas lineas del archivo (termina con linea vacia):" <<endl;
lineas.clear();
while (getline(cin, linea)) {
    if (linea.empty()){
        break;
    }
    lineas.push_back(linea);
}

//Sobrescribir el archivo con el nuevo contenido
ofstream archivosalida(nombreArchivo);
for (string linea : lineas) {
    archivoSalida << linea << endl;
}
archivosalida.close();

cout << "Archivo " << nombreArchivo << " editado exitosamente. " << endl;
    } else {
        cout << "Error al abrir el archivo. " << endl;
    }

    
}