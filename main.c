/* main.c */
#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
 char first[255], last[255];
 askname(first, last);
p====rintf("Hello,。 %s %s!\n", first, last);
 r====eturn 0;
}
