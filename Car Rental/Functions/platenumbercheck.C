
FILE *plates;
plates =fopen("Plates.txt", "r");
i = 0;

do{
  printf("Number plate :");
  scanf("%s",&plateNum);
  while (fgets(buf,1000, plates)!=NULL){
      if(plateNum  !=  buf){
          printf("The plate number already exists \n");
          check = 1
      }
  }
}while(check = 1);


if (platevar[] == input) {

}
