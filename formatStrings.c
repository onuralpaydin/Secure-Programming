#include <stdio.h>
#include <string.h>
int main()
{
    int id = 100, age = 25;
    char * name = "Bob Smith";
    printf("ID:%d, Name: %s, Age: %d\n",id,name,age);
    printf("ID:%d, Name: %s, Age: %d\n",id,name); //ID:100, Name: Bob Smith, Age: 6283712
    printf("ID:%d, Name: %s, Age: %d\n",id,name,"%s"); //ID:100, Name: Bob Smith, Age: -1694851036
    printf("ID:%d, Name: %s, Age: %d\n","%s","%x","%d"); //ID:-1594515420, Name: %x, Age: -1594515417
    return 0;
}