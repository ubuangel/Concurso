#include <iostream>
#include<vector> 
#include <algorithm>

using namespace std;





    long getMaxProfit(int precios[],int n) {
        long profit = 0L;
        int maxSoFar = 0;
        for (int i = n - 1; i > -1 ; i--) {
            if (precios[i] >= maxSoFar) {
                maxSoFar = precios[i];
            }
            profit += maxSoFar - precios[i];
        }
        return profit;
    }

    int  main() {
  	
  	
        int tam ;
        cin>>tam;

        for (int i = 0; i < tam; i++) {
            int numOfDays;
            cin>>numOfDays;
            int  precios[numOfDays];
            for (int j = 0; j < numOfDays; j++) {
                cin>>precios[j]; 
            }
           cout<<getMaxProfit(precios,numOfDays);
         
        }
    }

    

