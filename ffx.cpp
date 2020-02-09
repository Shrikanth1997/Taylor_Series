#include<bits/stdc++.h>

using namespace std;

int fact(int i){
	if(i<1)
		return 1;
	else
		return i * fact(i-1);
}

float ex(float x, int n){
	
	float sum = 1;
	for(int i=1;i<=n;i++){
		sum += pow(x,i) / fact(i);
		cout<<i<<" Fact: "<<fact(i)<<endl;
	}
		
	return sum;

}

int main(int argc, char *argv[]){

	if(argc!=3)
		cout<<"Usage: ./ffx number iterations"<<endl;
	else{
		
		float x = atof(argv[1]);
		int it = atoi(argv[2]);
		float fx = x + ex(x,it);
		cout<<fixed<<fx<<endl;

	
	}
}

