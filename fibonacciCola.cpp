#include <iostream>

using namespace std;

int calcularFibonacci(int n, int primero, int segundo){
        if(n==0){
            return primero; 
        }
        if(n==1){
            return segundo;
        }
        else if(n>=2){
			return calcularFibonacci(n-1, segundo, primero+segundo); 
		}
}

int main()
{
    int x=5;
    printf("%d",calcularFibonacci(x,0,1)); 
        
    
}
