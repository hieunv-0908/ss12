#include<stdio.h>
int printfAr(int ar[],int size,int max){
	for(int i =1;i<size;i++){
		if (ar[i]>ar[max]){
			max=i;
		}	
	}
	printf("max = %d \n maxIndex = %d",ar[max],max);
}
int main(){
	int arNum[6]={5,6,3,7,1,3};
	int size = sizeof(arNum) / sizeof(arNum[0]);
	int max=0;
	int n;
	printfAr(arNum,size,max);
	return 0;
}
