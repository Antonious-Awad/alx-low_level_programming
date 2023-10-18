#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

enum vowels
{
  a = 4,
  A = 4,
  e = 3,
  E = 3,
  o = 0,
  O = 0,
  t = 7,
  T = 7,
  l = 1,
  L = 1
};
char *_strcat (char *dest, char *src);
char *_strncat (char *dest, char *src, int n);
char *_strncpy (char *dest, char *src, int n);
int _strcmp (char *s1, char *s2);
void reverse_array (int *a, int n);
char *string_toupper (char *);
char *cap_string (char *);
char *leet (char *);
#endif /* MAIN_H */