#include "s21_string.h"

char* s21_strchr(const char* str, int c) {
  char* check;
  for (; *str != c && *str != '\0'; ++str) {
  }
  if (*str == c) {
    check = (char*)str;
  } else {
    check = S21_NULL;
  }
  return check;
}