#include<stdio.h>
void main(){
for (int i = 1; i <=5; i++)
{
    int j=1;
    for (int a=1; a<=i; a++)
    {
j=a*j;
       
    }
    printf("%d", j);
// if (i%2==0)
// {
//     printf("%d \n", i);
// }
printf("\n");
}


}