
	//Run time error in this code cause in fun function that is return pointer , stack removes -> no value for that address i will return fake values or segmentation fault 

	#include<stdio.h>

	int *fun(int *x){

		int y = *x + 10;	
		return &y;
	}

	void main(){
		int x = 10;
		
		int *ptr = fun(&x);
		printf("%d\n", *ptr);
	}
