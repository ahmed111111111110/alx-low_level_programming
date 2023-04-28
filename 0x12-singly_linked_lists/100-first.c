#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
void first() __attribute__ ((constructor));
/**
* first - prints a sentence before the main
* function is executed
*/
void first() {
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
