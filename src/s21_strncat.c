#include "s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  char *dest_start = dest;
  while (*dest != '\0') {
    dest++;
  }
  while (*src != '\0' && n > 0) {
    *dest = *src;
    dest++;
    src++;
    n--;
  }
  *dest = '\0';
  return dest_start;
}