#include <iostream>
#include "mia_lib.h"
#include <cstdlib>  
#include <fstream>

using namespace std;

int main() {
    int x = 10;  // Dichiarazione di una variabile intera
    int *ptr;    // Dichiarazione di un puntatore a un intero

    ptr = &x;    // Assegnamento dell'indirizzo di x al puntatore ptr

    cout << "Valore di x: " << x << endl;
    cout << "Indirizzo di x: " << &x << endl;
    cout << "Valore puntato da ptr: " << *ptr << endl;  // Dereferenziazione del puntatore
    cout << "Indirizzo memorizzato in ptr: " << ptr << endl;

    *ptr = 20;   // Modifica del valore puntato da ptr

    cout << "Nuovo valore di x: " << x <<endl;
    cout<<"Nuovo indirizzo: "<< &x;


    int array[5] = {10, 20, 30, 40, 50};
    int *patr = array;

    cout << "Elementi dell'array: ";
    for (int i = 0; i < 5; ++i) {
        cout << array[i] << " ";

    aCapo();

    cout << "Elementi tramite puntatore: ";
    for (int i = 0; i < 5; ++i) {
        cout << *(patr + i) << " ";  // Accesso agli elementi tramite il puntatore
    }
    aCapo();




    int n = 5;  // Numero di elementi nell'array
    int *arrayy;

    arrayy = (int *)malloc(n * sizeof(int));

    if (arrayy == nullptr) {
        cout << "Errore nell'allocazione della memoria." << endl;
        return 1;
    }

    // Inizializzazione degli elementi dell'array
    for (int i = 0; i < n; ++i) {
        arrayy[i] = i * 10;
    }

    // Stampa degli elementi dell'array
    for (int i = 0; i < n; ++i) {
        cout << "Elemento " << i << ": " << arrayy[i] << endl;
    }

    // Rilascio della memoria allocata con free
    free(arrayy);





    aCapo();


    int numElements = 5;  // Numero di elementi nell'array
    int *dynamicArray;

    // Allocazione dinamica di memoria utilizzando new
    dynamicArray = new int[numElements];

    // Inizializzazione degli elementi dell'array dinamico
    for (int i = 0; i < numElements; ++i) {
        dynamicArray[i] = i * 10;
    }

    // Stampa degli elementi dell'array dinamico
   cout << "Elementi dell'array dinamico: ";
    for (int i = 0; i < numElements; ++i) {
       cout << dynamicArray[i] << " ";
    }
    aCapo();

    // Rilascio della memoria allocata con delete
    delete[] dynamicArray;



    aCapo();

    ofstream outputFile("data.txt");
    outputFile << "Hello, file!";
    outputFile.close();

    ifstream inputFile("data.txt");
    string content;
    inputFile >> content;
    inputFile.close();
    


    return 0;
}
}