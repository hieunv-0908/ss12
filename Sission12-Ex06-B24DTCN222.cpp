#include<stdio.h>
int printfPrime(int sum,int x){
	if(x>0){
		for(int i =2;i<x;i++){
			if(x % i == 0){
				sum+=i;
			}
		}
		if(sum == x){
			printf("TRUE");
		}else{
			printf("FALSE");
		}
		
	}
}
int main(){
	int sum=1;
	int x;
	printf("moi nhap vao mot so bat ki");
	scanf("%d",&x);
	printfPrime(sum,x);
	return 0;
}
