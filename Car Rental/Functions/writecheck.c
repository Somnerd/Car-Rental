#include <stdio.h>
#include <stdlib.h>


int main() {

	int number,year , i;
  char buf[1000] , colour , brand ;

	FILE *ptr_file;
  ptr_file =fopen("Plates.txt", "r");


	printf("Give me a fucking number\n");
	scanf("%d\n",number );
	i=1;

	while (fgets(buf,1000, ptr_file)!=NULL){
		if (number == buf[i]) {
				printf("This number plate is already in the list : %d" , number);
		}
		i=i+1;
		printf("%s",buf);
	}
	fclose(ptr_file);


	system("PAUSE");
	return 0;
}
