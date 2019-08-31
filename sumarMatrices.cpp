#include <iostream>

using namespace std;

int sumarMatrices(int A[3][3],int B[3][3],int j){
	int C[3][3]; 
	if(j<3){
		for(int i=0; i<3; i++){
			C[j][i] = A[j][i] + B[j][i];
			printf("%d ",C[j][i]);
		}
		printf("\n");
		return sumarMatrices(A,B,j+1);
	}
}

int main(){
	int A[3][3] = {1,2,3,4,5,6,7,8,9};
	int B[3][3] = {1,2,3,4,5,6,7,8,9};
	sumarMatrices(A,B,0);
}
