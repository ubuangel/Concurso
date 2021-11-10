#include <iostream>
#include<vector> 
#include <algorithm>

using namespace std;

int main(){
	int A[3][3];
	for (unsigned int i = 0; i < 3; i += 1)
	{
		for (unsigned int j = 0; j < 3; j += 1)
		{
			cin>>A[i][j];
		}
	}
	
	cout<<endl;
	
	
		for (unsigned int j = 0; j < 3; j += 1)
	{
		int i=0;
		int cont=0;
		while (cont<3)
		{
			
			cout<<A[i][j];
			
			cont++;
			i++;
			
		}
		i=0;
						
		cout<<" " ;
		
	}
	
	

	

}
