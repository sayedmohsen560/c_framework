#include <stdio.h>

void printarr (int *arr,int length){
	for (int i = 0 ; i<length ;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
