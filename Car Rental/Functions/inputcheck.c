#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
  int main(){

 int num,temp;
 float tempf;
 char inp[1000];

 printf("Give an integer :");
 gets(inp);
 temp = isdigit(inp[0]);
 if (isdigit(inp[0])||(inp[0]=='+')) {
   tempf = atof(inp[0]);
   temp = (int)tempf;
   if (tempf / (temp+0.0) == 1.0 ) {
     printf("%.f",tempf);
   }else{
     printf("ERROR 1");
   }
 }else{
   printf("ERROR 2");
 }

 printf("\n");
 system("PAUSE");
 return 0;
}
