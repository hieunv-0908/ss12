#include<stdio.h>
int printfAr(int ar[],int size){
	for(int i =0;i<size;i++){
		printf("%4d",ar[i]);
	}
}
int main(){
	int arNum[6]={5,6,3,7,1,3};
	int size = sizeof(arNum)/sizeof(arNum[0]);
	int n;
	printfAr(arNum,size);
	return 0;
}
