#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 200000

int main(){
  system("CLS || clear");

  char temp[SIZE];
  int i,number;
  bool flag;

  do {
    flag =1;
    printf("Give an integer , meatbag :");
    gets(temp);
    if(strlen(temp)==0) {
      flag = 0;
    }else if(temp[0]!='+'&&temp[0]!='-'){
      for (i = 0; i < strlen(temp); i++) {
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
      system("CLS || clear");
    }

  } while(flag ==0);

  number = atoi(temp);
  printf("Ari8mos : %d",number);
  system("PAUSE");
  return number;
}
