/* Crea un programa que calcule el salario neto de un trabajador, 
basado en su salario bruto y los impuestos aplicables si es menor de 1.000 es un 10% 
si es mayor de 1.000 20% */

// CODEBOT PROGRAMANDO EN C++ / SUSCRIBETE SI TE GUSTA EL CONTENIDO.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	double salarioNeto = 0, impuestos, salarioBruto = 0;
	
	cout<<"- - - - - - - - - - - "<<endl;
	cout<<"CALCULAR SALARIO NETO"<<endl;
	cout<<"- - - - - - - - - - - "<<endl;
	
	//Mensaje en pantalla-preguntar al usuario
	cout<<"Ingrese el salario: "; cin>>salarioBruto;	
	
	//Operaciones matematicas aplicando los impuestos
	
	if(salarioBruto < 1000){
		impuestos = salarioBruto * 0.1; // Aplicamos el impuesto del 10%
	
	}else{
		impuestos = salarioBruto * 0.2; // Aplicamos el impuesto del 20%
	}
	
	// Operaciones matematicas salario neto
	
	salarioNeto = salarioBruto - impuestos;
	
	//Mostramos mensaje en pantalla con el resultado
	
	cout<<"El salario es: $"<<salarioNeto<<endl;
	
	
	system("pause");
	return 0;
}

