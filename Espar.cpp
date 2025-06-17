#include <iostream>

using namespace std;

/* Ejercicio #1: Escribe una función
llamada esPar que acepte un número
entero como parámetro y devuelva true
si el número es par o false si es impar.
Luego, en la función main(), solicita al
usuario que ingrese un número, llama a
la función esPar con este número como
argumento y muestra un mensaje en la
consola indicando si el número es par o
impar. */

// Grupo # 3
/* Integrantes:
Luis Enrique Herrera Figueroa - 20231031357
Soad Nallybeth Velásquez López - 20241001880
Maria Isabel Oviedo Zelaya - 20241000887
Daniel Edgardo Pavón Castro - 20241001960
Kristhian Josué Rivera Castro - 20231001015
*/


bool esPar (int &evaluar){
    bool par = false;

    if (evaluar % 2 == 0){
        par = true;
    }
    return par;
}

void Menu (){
    
    cout << "     Biendvenido al programa de evaluacion de numeros pares e impares \n ";
}

int main(){

    Menu();
    int respuesta;
   do
   {
       int numero;
       cout << " Numero a evaluar ";
       cin >> numero;
    
    
       // llamar a la funcion dentro de la decision para acelerar el proceso 
       
       if (esPar (numero)) // Si retorna true entra a la condicion si no entra a la parte falsa 
       {
           cout << "El numero: " << numero << " es par \n "; 
       }else{
           cout << "El numero: " << numero << " es impar \n ";
       }
      cout << "Desea evaluar otro numero? (1. Si || 2. No):  ";
      cin >> respuesta;
    } while (respuesta == 1);
    
    cout << " Saliendo del programa... \n";
    cout << " Hasta luego ";


    return 0;
}

