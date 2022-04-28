#pragma once 

#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>

#define MAX_INT 2147483647.0
#define MIN_INT -2147483648.0

typedef void (*fptr)(void *, const char *);

void to_char(void *dest, const char *str);
void to_int(void *dest, const char *str);
void to_double(void *dest, const char *str);
void print_char(void *ptrs[4], int type);
void print_int(void *ptrs[4], int type);
void print_float(void *ptrs[4], int type);
void print_double(void *ptrs[4], int type);
