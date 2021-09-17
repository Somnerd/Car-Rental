#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#define CHAR_SIZE 200000
#define LIST_SIZE 10
#define INPUT_SIZE 10

typedef struct Car {
  int year;
  int plate_number;
  char brand[LIST_SIZE][INPUT_SIZE] ;
  char colour[LIST_SIZE][INPUT_SIZE];
}Car;

int intCheck(){
//  system("CLS || clear");

  char temp[CHAR_SIZE];
  int i,number;
  bool flag;

  do {                           //The Start of the Do While Loop , to check whether the user has given an integer or something else
    flag =1;                     //Setting the flag to true , meaning that if no check happens , it wont be an infinite loop
  //  system("CLS || clear");       // Clears the console
    printf("Give an integer , meatbag :");
    gets(temp);                   //  User input through the "gets" command in order to count as input even a (space) input
    if(strlen(temp)==0) {           // A check to see if the user gave an input or if he just pressed enter
      flag = 0;                         // If the above statement is true , then we set the flag to false , in order for the user to give an input again
    }else if(temp[0]!='+'&&temp[0]!='-'){ //Checks if the first variable of the array string is an arithmetic operator
      for (i = 0; i < strlen(temp); i++) {  //A for loop that will repeat itself for the full length of the size of the string
        if (isdigit(temp[i])!=0) {
          flag = flag*1;
        }else{
          flag = flag*0;
        }
      }
    }else if((temp[0]=='+'&&temp[1]!='+')||(temp[0]=='+'&&temp[1]!='-')||(temp[0]=='-'&&temp[1]!='+')||(temp[0]=='-'&&temp[1]!='-')){
      for (i=0;i<strlen(temp);i++) {
        if(isdigit(temp[i])!=0){
          flag = flag*1;
        }else{
          flag = flag*0;
        }
      }
    }

    if (flag == 0) {
      printf("WRONG! \n\a");
      system("PAUSE");
    //  system("CLS || clear");
    }

  } while(flag ==0);

  number = atoi(temp);
  printf("Ari8mos : %d",number);
  system("PAUSE");
  return number;
}


int showAll(){
  int buf[1000];

  printf("\n" );

  FILE *cars;
  cars =fopen("Cars.txt", "r");

  printf("Number 		Colour		Brand		Year\n");
  while (fgets(buf,1000, cars)!=NULL){
    printf("%s",buf);
  }
  fclose(cars);

  printf("\n");
  system("PAUSE");
}

int usr_inp(){
  struct Car Car;
  int current_year = 2020;

  printf("\nCar Year\n");
  Car.year = intCheck();
  printf("\n%d\n",Car.year);
  while (true){
    if (Car.year > 1960 || Car.year < current_year) {
      Car.year = intCheck();
      printf("\n%d\n",Car.year );
    }else{
      break;
    }
  }

  return 0;
}


int main(){
  int input;


  printf("1:\tShow every item on the list.\n"
         "2:\tInput.\n"
         "0:\tExit.\n");
  input = intCheck();


  while (input != 0){
      switch (input) {
      case 0:
        printf("\nK THX BYE\n");
        return 0;
      case 1:
        showAll();
        break;
      case 2:
        usr_inp();
        break;
    }
  }
}
