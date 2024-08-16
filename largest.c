#include<stdio.h>
void main(){
    int b[7]={66,10,20,49,55,1,56};
 int large_no=b[0];
for (  int i = 0; i<=5; i++)
{
   if (large_no <b[i])
   {
    large_no =b[i];
   }
   
}
printf("%d", large_no);
}