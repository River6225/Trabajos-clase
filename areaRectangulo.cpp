#include <iostream>
using namespace std;


/*Ejercicio #2: Escribe una función
llamada calcularAreaRectangulo que
acepte dos números enteros como
parámetros: la base y la altura de un
rectángulo, y devuelva el área del
rectángulo. Luego, en la función
main(), solicita al usuario que ingrese
la base y la altura del rectángulo, llama
a la función calcularAreaRectangulo
con estos valores como argumentos y
muestra el área en la consola.*/

// Grupo # 3
/* Integrantes:
Luis Enrique Herrera Figueroa - 20231031357
Soad Nallybeth Velásquez López - 20241001880
Maria Isabel Oviedo Zelaya - 20241000887
Daniel Edgardo Pavón Castro - 20241001960
Kristhian Josué Rivera Castro - 20231001015
*/

int areaRectangulo(int a , int b){
	
	return a * b;
}

void Menu (){
    
    cout << "    Bienvenido al programa de calcular areas de triangulos rectangulos \n ";
}

int main(int argc, char *argv[]) {
	
	Menu();
	
	int respuesta;
	do{
	   int altura, base, area;
	  cout<<"Ingrese la base: "<<endl;
	  cin>>base;
	  cout<<"Ingrese la altura: "<<endl;
	  cin>>altura;

	 area = areaRectangulo(altura , base);
	
	 cout<<"El area del rectangulo es: "<<area<<endl;

      
      cout << "Desea evaluar otro numero? (1. Si || 2. No):  ";
      cin >> respuesta;
    } while (respuesta == 1);
    
    cout << " Saliendo del programa... \n";
    cout << " Hasta luego ";

	
	
	return 0;
}

