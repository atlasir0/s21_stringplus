#include "s21_string.h"

s21_size_t s21_strspn(const char *str, const char *delim) {
  s21_size_t count = 0;
  const char *ptr = str;
  while (*ptr != '\0' && s21_strchr(delim, *ptr) != S21_NULL) {
    count++;
    ptr++;
  }
  return count;
}