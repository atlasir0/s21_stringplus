#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char *res = S21_NULL;
  int i = s21_strlen(str);
  while (i >= 0) {
    if (str[i] == c) {
      res = ((char *)str) + i;
      break;
    }
    i--;
  }
  return res;
}