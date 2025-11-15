#include <stdio.h>
#include <string.h>

int main() {
  char greetings[] = "Hello World!";
  
  printf("%c\n", greetings[0]);
  
  int l = sizeof(greetings[0]);
  printf("%lu\n", l);
  
  int len = sizeof(greetings);
  printf("%lu\n", len);
  
  int length = strlen(greetings);
  
  for (int i=0; i<len; i++) { 
  	printf("%c", greetings[i]);
  }
  
  printf("\n");
  
  printf ("Lehgth: %lu\n", len);
  printf ("Lehgth: %lu\n", length);
 
  return 0;
}