#include <stdio.h>
int main(void){
int i;
short s,sh;
char c;
i = 0xdeadbeef;
s = i;
c = i;
sh=65536; //overflow in conversion from 'int' to 'short int' changes value from '65536' to '0' [-Woverflow]
printf("i = 0x%x (%d bits)\n", i, sizeof(i) * 8);
printf("s = 0x%x (%d bits)\n", s, sizeof(s) * 8);
printf("c = 0x%x (%d bits)\n", c, sizeof(c) * 8);
printf("c = 0x%x (%d bits)\n", sh, sizeof(c) * 8); //c = 0x0 (8 bits)
return 0;
}