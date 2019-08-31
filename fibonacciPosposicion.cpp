#include <iostream>

using namespace std;

int fibro(int n){
	if(n==0||n==1){
		return n;
	}
	if(n>=2){
		return fibro(n-1)+fibro(n-2);
	}
}
int main(void){
	//int num=11;
	int f=fibro(11);
	printf("%d",f);
}
