#include <iostream>
#include<vector> 
#include <string>
#include<math.h>
#include <algorithm>
//cuido con string y pones void function para el juez
using namespace std;

int main(){

	
	string micadena="ifmanwasmeanttostayonthegroundgodwouldhavegivenusroots";
	 micadena.erase(std::remove(micadena.begin(), micadena.end(), ' '), micadena.end());
	
	int tam=micadena.length();
	
	int filas=sqrt(tam);
	int columnas=filas;
	//cout<<filas;
	
	
	if (filas*columnas >= tam)
	{
		columnas=filas;
	}else{
		columnas=filas+1;
		
	}
	
	char micad[filas][columnas];
	
	char p[micadena.length()];
	

	
	// asignar aelemtos a matriz
	int a=0;
	for ( int i = 0; i < filas; i += 1)
	{
		for ( int j = 0; j < columnas; j += 1)
		{
			micad[i][j]=micadena[a];
			a++;
		}
	}
	
	//mostrar
	for ( int i = 0; i < filas; i += 1)
	{
		for ( int j = 0; j < columnas; j += 1)
		{
			cout<<micad[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
	
	
	cout<<endl;
	cout<<endl;
		for (unsigned int j = 0; j < columnas; j += 1)
	{
		int i=0;
		int cont=0;
		while (cont<filas)
		{
			
			cout<<micad[i][j];
			
			cont++;
			i++;
			
		}
		i=0;
						
		cout<<" " ;
		
	}
	
	

}
