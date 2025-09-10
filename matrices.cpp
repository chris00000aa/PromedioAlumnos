#include <iostream>
// limites minimo 1 maximo x, bucle do while
using namespace std;

int main()
{
    int numeros[20][20], suma = 0, cantidad_alumnos, cantidad_salones, salir;//arreglo o vectores
    float promedio;
    do {
        suma = 0;
        cout << "Cantidad de alumnos " << endl; cin >> cantidad_alumnos;
        cout << "Cantidad de salones " << endl; cin >> cantidad_salones;
        if (cantidad_alumnos < 15 && cantidad_alumnos > 0 && cantidad_salones < 15 && cantidad_salones >0)
        {
            for (int y = 1; y <= cantidad_salones; y++)
            {
                cout << "Grupo " << y << endl;
                for (int x = 1; x <= cantidad_alumnos; x++)
                {
                    cout << "Alumno " << x << endl; cin >> numeros[x][y];
                }
            }
            for (int y = 1; y <= cantidad_salones; y++)
            {
                for (int x = 1; x <= cantidad_alumnos; x++)
                {
                    suma = suma + numeros[x][y];
                }
            }
            promedio = suma / (cantidad_salones * cantidad_alumnos);// a new proyect
            cout << "la suma es:" << suma << endl;
            cout << "el promedio es:" << promedio << endl;
        }
        else {
            cout << "Por favor introduce un numero coherente" << endl;
        }
        cout << "Desea promediar mas numeros\n1.SI\n2.NO" << endl;
        cin >> salir;

    } while (salir != 2);
    cout << "GRACIAS POR USAR EL PROGRAMA .-." << endl;
    return 0;
}