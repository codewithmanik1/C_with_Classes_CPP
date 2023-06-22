	
	//create object using malloc 
	//take values from user
	
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	struct Lang{
		char langName[20];
		char founder[20];

	};

	void values(struct Lang *ptr){
		printf("Enter the Language name\n");
		scanf("%s",ptr->langName);

		printf("Enter the founder name\n");
		scanf("%s",ptr->founder);
	}

	void printData(struct Lang *ptr){
		printf("%s\n",ptr->langName);
		printf("%s\n",ptr->founder);
	
	}
	void main(){
		
		//create memory for structure
		struct Lang *ptr1 = (struct Lang*)malloc(sizeof(struct Lang));
		struct Lang *ptr2 = (struct Lang*)malloc(sizeof(struct Lang));
		struct Lang *ptr3 = (struct Lang*)malloc(sizeof(struct Lang));

		//take values from user
		printf("Enter Data by User\n");
		values(ptr1);
		values(ptr2);
		values(ptr3);

		//print values 
		printf("===========================================================\n");
		printf("printData\n");
		printData(ptr1);
		printData(ptr2);
		printData(ptr3);
	}
	
	
