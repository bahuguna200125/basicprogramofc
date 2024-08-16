#include<stdio.h>
#include<stdbool.h>
void main(){
    int hindi;
    int english;
    int maths;
    int physics;
    int chemistry;
    int totalmarks;
    int percentage;
    int total_fail_sub=0;
    bool fail=false;
   int fail_sub_marks=0;
    printf("please enter marks of hindi \n");
scanf("%d",&hindi);
  printf("please enter marks of english \n");
scanf("%d",&english);
 printf("please enter marks of maths \n");
scanf("%d",&maths);
 printf("please enter marks of physics \n");
scanf("%d",&physics);
 printf("please enter marks of chemistry \n");
scanf("%d",&chemistry);
totalmarks=hindi+english+maths+physics+chemistry;
printf("Total marks- %d \n",totalmarks);
percentage=(totalmarks*100)/500;
printf("Percentage - %d \n",percentage );

if (hindi<33)
{
 fail=true;
 total_fail_sub=total_fail_sub+1;
fail_sub_marks=hindi;
}
if (english<33)
{
 fail=true;
 total_fail_sub=total_fail_sub+1;
fail_sub_marks=english;
}
if (maths<33)
{
 fail=1;
 total_fail_sub=total_fail_sub+1;
fail_sub_marks=maths;
}
if (physics<33)
{
 fail=true;
 total_fail_sub=total_fail_sub+1;
fail_sub_marks=physics;
}
if (chemistry<33)
{
 fail=true;
 total_fail_sub=total_fail_sub+1;
fail_sub_marks=chemistry;
}

if (fail)
{
if ( total_fail_sub<=1)
{
  if (fail_sub_marks>=25)
  {
    printf("Pass With Grace");
  }

}
else{ 
  printf("you're fail");

}

}
else{
    printf("you're pass");
}
}