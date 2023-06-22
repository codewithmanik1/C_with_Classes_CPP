	
	#include<stdio.h>
		
	void fun(int arr[], int size)/*here starting address of arr comes in paramteres*/{
		for(int i=0; i<size; i++){
			arr[i] = arr[i]+10;

			//ubove line is internally in this formant
			//*(arr+i) = *(arr+i)+10;
		}		
	}

	void main(){
		int arr[] = {10,20,30,40,50};
		int size = sizeof(arr)/sizeof(int);

		fun(arr, size);
		for(int i=0; i<size; i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
