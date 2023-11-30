#include "s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *base = S21_NULL;
  if (str == S21_NULL && base == S21_NULL) {
    return S21_NULL;
  }
  if (!str) {
    str = base;
    if (str == S21_NULL) {
      return S21_NULL;
    }
  }
  if (*delim == '\0') {
    base = s21_strchr(str + 1, '\0');
    return str;
  }
  str += s21_strspn(str, delim);
  if (*str == '\0') {
    base = S21_NULL;
    return S21_NULL;
  }
  base = str + s21_strcspn(str, delim);
  if (base[0] != '\0') {
    base[0] = '\0';
    base++;
  } else {
    base = S21_NULL;
  }
  return str;
}