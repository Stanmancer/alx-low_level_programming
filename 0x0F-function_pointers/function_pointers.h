#ifndef FUNC_POINTERS_H
#define FUNC_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif /*FUNC_POINTERS_H*/
