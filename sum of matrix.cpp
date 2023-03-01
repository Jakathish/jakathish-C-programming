#include <stdio.h>
int main(){
	int r,c,a[100][100],b[100][100],sum[100][100],i,j;
	printf("enter the number of rows:");
	scanf("%d",&r);
	printf("enter the number of columns:");
	scanf("%d",&c);
	if(r==c){
	printf("enter the elements of matrix 1");
	for(i=0;i<r;++i)
	for(j=0;j<c;++j){
	printf("enter the element a%d%d:",i+1,j+1);
	scanf("%d",&a[i][j]);}
   printf("enter the elements of matrix 2");
   for(i=0;i<r;++i)
   for(j=0;j<c;++j){
   printf("enter the element b%d%d:",i+1,j+1);
   scanf("%d",&b[i][j]);}
  for (i=0;i<r;++i)
  for (j=0;j<c;++j) {
  sum[i][j] = a[i][j] + b[i][j];}
  printf("\nSum of two matrices: \n");
  for (i=0;i<r;++i)
  for (j=0;j<c;++j){
  printf("%d   ",sum[i][j]);
  {
  	if(j==c-1){
  		printf("\n\n");
	  }
  }
}
}
  return 0;
}




