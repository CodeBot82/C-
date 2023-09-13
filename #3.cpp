// 3# Crear un programa que invierta un vector definido - y mostrar esa salida de ese vector

//CODEBOTS PROGRAMANDO EN C++ / SUSCRIBETE PARA MAS CONTENIDO 


//librerias 
#include<iostream>
#include<stdlib.h>

//para la entrada y salida de datos
using namespace std;

int main(){
	int vector[5] = {1,2,3,4,5};
	
	// blucle para invertir el vector
	
	for(int i = 4; i >= 0; i--){
		cout<<vector[i]<<endl;
	}
	
	system("pause");
	return 0;
}
