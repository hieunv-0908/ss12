#include<stdio.h>
int sum(int a,int b){
	return a+b;
}
int main(){
	int x;
	int y;
	scanf("%d",&x);
	scanf("%d",&y);
	int tong =sum(x,y);
	printf("%d",tong);
	return 0;
}
