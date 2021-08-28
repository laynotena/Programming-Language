#include <stdio.h>
#include <string.h>

int the_same(char *keyword, char *token){
	int i=0;
	if(strlen(keyword) == strlen(token)){
		for(i = 0 ; i<strlen(keyword); i++){
			if(keyword[i] != token[i]){
				return 0;
			}
		}
		return 1;
	}
	else
		return 0;
}

int isin(char *keyword, char *token){
	if (token[strlen(token)-1] == keyword[0])
		return 1;
	return 0;
}


int main ()
{
  int i, j=0;
  int file_count = 0;
  char c;
  char string [127];
  char *start = string;
  char delimeters [] = ".";
  char file [127][127];
  char *string_1 = "and";
  char *string_2 = "of";
  char *string_3 = "the";
  char *string_4 = "at";
  while(scanf("%s", string)!= EOF){
  	if (the_same(start, string_1)== 1){
  		continue;
  	}
  	else if (the_same(start, string_2)== 1){
  		continue;
  	}
  	else if (the_same(start, string_3)== 1){
  		continue;
  	}
	else if (the_same(start, string_4)== 1){
  		continue;
  	}
  	else{
  		c = start[0];
  		c = toupper(c);
		file[file_count][j] = c;
		j++;
		if (isin(delimeters, start) == 1){
  			file_count ++;
  			j=0;
		}
  	}
  }

  for (i = 0; i < file_count ; i++)
	printf ("%s ", file[i]);
  return 0;
}