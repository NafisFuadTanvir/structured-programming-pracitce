#include <stdio.h>
int main()
{
char s[] = "you are my wife";
char *p = s;
while(*p != '\0'){

printf("%c",*p);
p++;

}

return 0;
}
