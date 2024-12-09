#include<stdio.h>
int printfFactorial(int n,int factorial){
	for(int i =1;i<=n;i++){
		factorial *=i;
	}
	printf("n!=%d",factorial);
}
int main(){
	int factorial=1;
	int n;
	printf("moi nhap vao mot so");
	scanf("%d",&n);
	printfFactorial(n,factorial);
	return 0;
}
