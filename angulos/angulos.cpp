/*
 * Curso de Programación 1. Práctica 1
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 20 de septiembre de 2019
 * Resumen: Tarea 5
 */
#include <iostream>
#include <cmath>
using namespace std;

/*
 * Programa que escribe en la pantalla una tabla de ángulos y valores
 * trigonométricos: en cada línea un valor de grados múltiplo de 10 entre el 0 y
 * el 180, su equivalente en radianes y su seno y coseno, de acuerdo con el
 * siguiente formato:
 * 
 *    Grados Radianes     Seno   Coseno
 *  ======== ======== ======== ========
 *         0   0.0000   0.0000   1.0000
 *        10   0.1745   0.1736   0.9848
 *        20   0.3491   0.3420   0.9397
 *        30   0.5236   0.5000   0.8660
 *       ...    ...      ...      ... 
 *       180   3.1416   0.0000  -1.0000
 */
int main() {
    const int ANCHO = 9;
    cout << "Grados" << "Radianes" << "Seno" << "Coseno"
         << endl;

    cout << "========" << "========" << "========" << "========" << endl;
         
    cout << fixed;

    // La instrucción que aparece a continuación es una «instrucción iterativa
    // indexada» o bucle «for» que veremos con detalle en el tema 5. Mientras
    // tanto, puede bastar saber que la instrucción de escritura en la pantalla
    // que aparece en el cuerpo del «for» se va a repetir varias veces, con el
    // valor del dato varible «grados» cambiando de iteración en iteración. 
    // La primera vez que se ejecute (1ª iteración), grados habrá tomado el
    // valor 0, la segunda vez que se ejecute, grados valdrá 10 y así
    // sucesivamente irá aumentando su valor de 10 en 10 hasta que en la última
    // iteración, grados valdrá 180.
    for (double grados = 0; grados <= 180; grados += 10) {
        double radianes = M_PI * grados / 180.0;
        cout << grados << radianes << sin(radianes) << cos(radianes) << endl;
    }

    return 0;
}
