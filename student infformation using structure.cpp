#include <stdio.h>

int main()
{
    int arr[]={7,2,11,4,5};
    int i, max, min, size;
    size=sizeof(arr)/sizeof(arr[0]);
    max = arr[0];
    min = arr[0];
    
    for(i=1; i<size; i++)
        {
		
        if(arr[i] > max)
             max = arr[i];
               
        if(arr[i] < min)
             min = arr[i];
           
        }
    
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
