#include<stdio.h>
int main(){
    int i;
	printf("enter your age:");
	scanf("%d",&i);
	if(i<=0)
    printf("INVALID");
    else{
	if(i>=18)
	printf("you are eligible for voting");
    else
	printf("you have to wait for %d",18-i);
}
    return 0;		
}
	
