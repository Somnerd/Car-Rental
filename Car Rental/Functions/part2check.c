#include "stdio.h"
#include "stdlib.h"


int main(){
    int option , year , number; // number of vehicles
  	char buf[1000] , colour[10] , brand[14] , confirm;
 
  printf("Plate number :"); //plate number
  scanf("%d", &number);

  FILE *colors;
  colors =fopen("BasicColors.txt", "r");
  printf("Pick a colour from below : \n");
  while (fgets(buf,1000, colors)!=NULL)
  printf("%s",buf);
  printf("\n");
  printf("Colour :");
  scanf("%s", &colour);
  fclose(colors);


  printf("\n");
  FILE *companies;
  companies =fopen("Companies.txt", "r");
  printf("Pick a brand from below : \n");
  while (fgets(buf,1000, colors)!=NULL)
  printf("%s",buf);
  printf("\n");
  printf("Brand :");
  scanf("%s", &brand);
  fclose(companies);

  do {
  printf("Year :" );
  scanf("%d",&year );
  } while((year < 1900)||(year > 2020));

  printf("\n");

	





/*
  printf("Your input was : %d %s %s %d \n", number , colour , brand , year);
  printf("Y/N to save or delete your input :" );
  scanf("%c \n", &confirm);

  if (confirm == 'Y' || confirm == 'y') { //checkme
    printf("Input Saved\n");
  }else if(confirm == 'N' || confirm == 'n'){
    printf("Input Deleted\n");
  }else{
    while ((confirm != 'Y')||(confirm != "N")) {
      printf("Non available input \n Y/N :");
      scanf("%c \n",confirm);
      if (confirm == 'Y') {
        printf("Input Saved\n");
      }else if(confirm == 'N'){
        printf("Input Deleted\n");
      }
    }
  }
*/


system("PAUSE");
return(0);
}
