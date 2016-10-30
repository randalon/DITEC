// Yael
// Objetivo: Metodo de Ordenacion por Seleccion Directa

#include <iostream>
using namespace std;

//Funciones
void ordenacion(int[], int);
void mostrar(int[], int);

//Constantes
const bool ordenar=true;
const int MAX=30;

void OrdenamientoSeleccion() {
	int n;
	int arreglo[MAX];

	cout<<endl<<"**** Ordenacion por Metodo de Seleccion ****"<<endl<<endl;
	
    do{
		cout<<"Cuantos datos quieres ordenar? ";
		cin>>n;
		if(n<2 || n>MAX)
		{
			cout<<" Escoge una cantidad entre 2 y 30"<<endl;
		}
	}while(n<2 || n>MAX);
	
	cout<<endl;
	
	//Solicitar los elementos del arreglo
	for(int i=0; i<n; i++)
	{
		cout<<"Escribe el elemento " <<i+1 <<" -> ";
		cin>>arreglo[i];
	}
	
	//Mostrar el arreglo desordenado
	cout<<endl <<"Los elementos que ingresaste son: "<<endl;
	mostrar(arreglo, n);
	cout<<endl<<endl;
	
	//Llamar la funcion
	cout <<endl <<"Ordenando los datos.... " <<endl;
	ordenacion(arreglo, n);
	cout<<endl;
	
	//Mostrar el arreglo ordenado
	cout<<endl <<"Estos son tus datos ya ordenados" <<endl;
	mostrar(arreglo, n);
	cout<<endl<<endl;
	
	cout<<endl <<"* Gracias por su visita :) *" <<endl<<endl;
	
}

//Funcion para ordenar los elementos del arreglo
void ordenacion (int arreglo[], int n)
{
	int copia, menor, posicion;
	for(int i=0; i<n-1; i++)
	{
		menor=arreglo[i];
		posicion=i;
		for(int j=i+1; j<n; j++){
			if(arreglo[j]<menor){
				menor=arreglo[j];
				posicion=j;
			}
		}
		arreglo[posicion]=arreglo[i];
		arreglo[i]=menor;	
		
		//Para mostrar como se va ordenando el arreglo
		if(ordenar==true){
			for(int i=0; i<n; i++)
			{
				cout<<" | "<< arreglo[i];
			}
			cout<<" | "<<endl;
		}
	
	}
	return;
}

//Funcion para mostrar los elementos del arreglo
void mostrar (int arreglo[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<" | "<< arreglo[i];
	}
	cout<<" | ";
	return;
}
