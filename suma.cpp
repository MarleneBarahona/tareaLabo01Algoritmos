#include <iostream>

using namespace std;

int suma(int A[],int n){
	if(n==1){
		return A[0];
	}
	if(n>1){
		return suma(A,n-1)+A[n-1];
	}
}

int main(){
	int n=5;
	int A[n]={7,2,3,4,5};
	//int n=2;
	//int A[n]={1,2};
	int S = suma(A,n);
	printf("%d",S);
}
