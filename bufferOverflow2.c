#include <string.h>
void do_stuff(char * a) {
char b[10];
strncpy(b, a, strlen(a));
}
int main() {
do_stuff("qwertyuopasdfghjklzxcvbnm");
return 0;
}