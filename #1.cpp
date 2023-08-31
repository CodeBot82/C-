/*Programa que convierta grados Celsius a Fahrenheit, 
ingresando la temperatura en Celsius por el usuario.*/

//CODEBOT PROGRAMANDO EN C++ / Suscribete para mas contenido.

#include<iostream>

using namespace std;

int main(){
	float cels = 0, fahren = 0;
	
	cout<<"- - - - - - - - - - - - - - - - - - "<<endl;
	cout<<"CONVERTIDOR DE CELSIUS A FARENHEIT"<<endl;
	cout<<"- - - - - - - - - - - - - - - - - - "<<endl;
	
	//Mensaje en pantalla
	cout<<"\nIngrese la temperatura en Celsius: "; cin>>cels;
	
	//Operaciones matematicas
	//Formula f = (1.8 * C) + 32
	
	fahren = (1.8 * cels) + 32;
	
	// Mostramos el resultado en pantalla
	cout<<"La conversion es: "<<fahren<<endl;
	
	//Si calculamos 40C deberia darnos 104F
	//Si calculamos 17C deberia darnos 62.6
	
	
	
	
	return 0;
}