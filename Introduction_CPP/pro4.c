	
	//malloc practice
	
	#include<stdio.h>
	#include<stdlib.h>


	void fun(){
	
		int *ptr = (int*)malloc(sizeof(int));	//space -> heap section
		*ptr = 50;
		printf("%d\n",*ptr);
	}

	void gun(){
		for(int i=0; i<100000000; i++){
			//nothing
		}
	}
	void main(){

		int *ptr = (int*)malloc(sizeof(int));	//this space is allocated on the heap section
		*ptr = 20;
		printf("%d\n",*ptr);
		free(ptr);

		fun();
		gun();
	}
