#include <bits/stdc++.h>

using namespace std;
int beautifulBinaryString(string ch,int n) {
	
    int i=0,c=0;
   while(i<ch.length()){
		if(ch[i]=='0'&& ch[i+1]=='1'&& ch[i+2]=='0'){
			c++;
			i+=3;
		}
		else{
			i+=1;
		}
	}
	return c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));


	int n;
        string a;
	cin>>n;
	cin>>a;
	
int result = beautifulBinaryString(a,n);
	cout<<result;

    fout << result << "\n";

	
	
	

    

    return 0;
}
