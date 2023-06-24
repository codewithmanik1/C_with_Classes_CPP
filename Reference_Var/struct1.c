//error : In C we can not Initialized variable in the Structure 

#include<stdio.h>

struct Player {
    int jersNo = 18;
    char name[10] = "Virat";

}obj;

void main(){

    printf("%d\n",obj.name);
}