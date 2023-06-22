	
	//Structure in C
	
	#include<stdio.h>
	
	struct Batsman{
		char name[20];
		int jerNo;
		float avg;
	}vk = {"Virat",18,48.50};	//object creation , memory will create on the Data section for vk

	void main(){
		printf("%ld\n",sizeof(struct Batsman));		

		printf("%s\n",vk.name);
		printf("%d\n",vk.jerNo);
		printf("%lf\n",vk.avg);
		
		struct Batsman msd = {"MSD",7,60.00};	//memory will create on the main stack frame
		printf("%s\n",msd.name);
		printf("%d\n",msd.jerNo);
		printf("%lf\n",msd.avg);
	}
