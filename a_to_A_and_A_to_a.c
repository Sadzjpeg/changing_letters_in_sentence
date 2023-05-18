#include <stdio.h>
#include <ctype.h>
    /*checks if it is upper or lower case*/
int pretvaranje(char string[],int velicina){
  int i;
  for(i=0;i<velicina;i++){
  if(string[i]>='a' &&string[i]<='z'){
    string[i]=toupper(string[i]);
  }else if(string[i]>='A'&&string[i]<='Z') {
    string[i]=tolower(string[i]);
  }
    }
  return 0;
}

int main(void) {
  char string[20];
    /*getting sentence and calling function*/
  fgets(string,20,stdin);
  pretvaranje(string,20);
    /*printing the final version of sentence*/
  printf("%s",string);
  return 0;
}
