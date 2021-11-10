#include <iostream>
#include<vector> 
#include <string>
#include<math.h>
#include <algorithm>

using namespace std;

int main(){

	
	string micadena="haveaniceday";
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
	
	//convertir a array
	for (unsigned int i = 0; i < sizeof(p); i += 1)
	{
		 p[i] = micadena[i];

        	cout << p[i];
	}
	
	cout<<endl;
	
	// asignar aelemtos a matriz
	int a=0;
	for ( int i = 0; i < filas; i += 1)
	{
		for ( int j = 0; j < columnas; j += 1)
		{
			micad[i][j]=p[a];
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
