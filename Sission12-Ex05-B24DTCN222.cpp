#include<stdio.h>
int printfPrime(int isPrime,int x){
	if(x>=1){
		for(int i =2;i<x;i++){
			if(x % i == 0){
				printf("FALSE\n");
				return 1;
			}
		}
		
	}else{
		printf("FALSE\n");
		return 2;
	}
	printf("TRUE\n");
}
int main(){
	int isPrime =1;
	int x,y;
	printf("moi nhap vao mot so bat ki");
	scanf("%d",&x);
	scanf("%d",&y);
	printfPrime(isPrime,x);
	printfPrime(isPrime,y);
	return 0;
}
