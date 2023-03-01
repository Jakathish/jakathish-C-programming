#include<stdio.h>
int main(){
	int age;
	printf("enter your age:");
	scanf("%d",age);
	if(age>=18)
	printf("you are eligible for voting");
	else
	printf("you have to wait for",18-age);
	return 0;
}
