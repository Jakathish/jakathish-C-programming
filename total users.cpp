#include <stdio.h>
int main() 
{
    int su,tu,stu;
    printf("enter Total user ");
    scanf("%d",&tu);
    
    if(tu>0)
    {
        printf("enter Staff user ");
        scanf("%d",&stu);
        if(tu!=stu&&tu>stu+stu/3)
        {
        su=tu-(stu+stu/3);
        printf("%d",su);
        }
        else
        printf("Invalid as staff and total users are equal/more");
    }
    else
    printf("Invalid as total users are 0 /less");
}
