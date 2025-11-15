#include <stdio.h>

int main() {
  
  FILE *ptr;
  char ch;
  
  ptr = fopen("../FocusArea.txt", "r"); 
  // Check if file exists
    if (ptr == NULL) {
        printf("Error: File not found!\n");
        return 1;  // Exit with error code
    }

    // Read and display file content character by character
    while ((ch = fgetc(ptr)) != EOF) {								// EOF (End of File)
//      putchar(ch);
		printf ("%c", ch);
    }
	
    fclose(ptr);
 
  return 0;
}