#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
  int year;
  do {
    printf("Give a year between 1900 and 2019\n" );
    scanf("%d",&year );
  } while((year < 1900)||(year > 2020));

system("PAUSE");
return 0;
}

