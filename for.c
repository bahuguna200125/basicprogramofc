#include<stdio.h>
void main(){
    int a[5]= { 10,15,25,7,8};

 int smallest_no=a[0];
for ( int i =1; i <= 4; i++){

if (smallest_no > a[i])
{
    smallest_no =a[i];
}

    
   
}
  printf("%d " , smallest_no);

}