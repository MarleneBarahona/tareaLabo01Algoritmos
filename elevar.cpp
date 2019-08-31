#include <iostream>

using namespace std;

int elevar(int x, int n){
	if(n==0){
		return 1;
	}
	if(n>0){
		//return elevar(x,n)*x;
		return elevar(x,n-1)*x;
	}
}

int main(){
	int x=2;
	int n=0;
	printf("%d \n",elevar(x,n));
}
