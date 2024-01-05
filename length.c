/*Write a program to count the number of words in a sentence.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int i;
	char name[]="my name is sarishma regmi.";
	int length= sizeof(name)/ sizeof(name[0]);
	
		printf("%d\n", length);
	return 0;
}
