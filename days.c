#include<stdio.h>
void main(){
     char days[7][10]= {"sunday", "monday","tuesday","wednesday","thursday","friday","satuerday"};
for (int i = 0; i <=7; i++)
{
if (i%2==0)
{
    printf("%s \n", days[i]);
}

}


}