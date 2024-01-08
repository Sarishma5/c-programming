#include<stdio.h>
#include<conio.h>
 int main(){
 	char name[30];
	printf("enter your name: ");
	scanf("%s", name);
	myFunction(name);
	return 0;
}
void myFunction(char name[]){
	printf("hello %s!\n",name);
	printf("you are so good <3\n");
	printf("stay happy :)");
}
