#include <iostream>
#include<vector> 
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr) {
     
    int long n=5;
        int  long array2[n];    
    int long sumatotal=0;
    int long gvalor;
    for ( int long j = 0; j < n; j += 1)
    
    {
        gvalor=arr[j];
        arr[j]=0;
        for ( int long i = 0; i < n; i += 1)
        {
            sumatotal=sumatotal+arr[i];
        }
        //cout<<sumatotal<<endl;
        array2[j]=sumatotal;
        
        sumatotal=0;
        arr[j]=gvalor;
    }
    


    
    cout<< *min_element(array2 , array2 + n)<<" "<< *max_element(array2 , array2 + n) << endl;
    
    
}




int main(){
	vector<int> array(5);
	
	for (unsigned int i = 0; i < 5; i += 1)
	{
		cin>>array[i];
	}
	miniMaxSum(array);
	

	
}
