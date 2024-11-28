#include <stdio.h>
#include <string.h>

//for input 123456789012345678901234567890 we get segmentation fault
//for input asdfghjklopasdfghjklopasdfghjklop we get segmentation fault
void doit(void) {
    printf("%s","Write smth more than 25 characters\n");
  char buf[8];
  gets(buf);
  printf("%s\n", buf);
}

int main(void) {
  printf("So... The End...\n");
  doit();
  printf("or... maybe not?\n");

  return 0;
}