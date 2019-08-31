#include <iostream>

using namespace std;

int menorValor(int A[],int n){
	int key;
	if (n==1){
			return A[0];
	}else{
		key=menorValor(A, n-1);
		if(key<A[n-1]){
			return key;
		}else return A[n-1];	
	}
}

int main(){
	int n=5;
	int A[n]={8,2,1,4,5};
	int S = menorValor(A,n);
	printf("%d",S);
}
