#include<stdio.h>
void main(){
   int privious_value=0;
   int current_value=1;
int next_value;
for (int i = 0; i<=10; i++)
{
 
next_value=privious_value+current_value;
printf( "%d \n",next_value);
 privious_value=current_value;
   current_value=next_value;
}

}