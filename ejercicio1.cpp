#include <iostream>
#include<vector> 
#include <algorithm>

using namespace std;


	void test(int long  array[],int long n){
		
	long long array2[n];	
	long long sumatotal=0;
	int long gvalor;
	for ( int long j = 0; j < n; j += 1)
	
	{
		gvalor=array[j];
		array[j]=0;
		for ( int long i = 0; i < n; i += 1)
		{
			sumatotal=sumatotal+array[i];
		}
		//cout<<sumatotal<<endl;
		array2[j]=sumatotal;
		
		sumatotal=0;
		array[j]=gvalor;
	}
	


	
	cout<< *min_element(array2 , array2 + n)<<" "<< *max_element(array2 , array2 + n) << endl;
	

}



int main(){
int long array[5]={1,2,3,4,5};

test(array,5);
	cout<<" "<<endl;

}
