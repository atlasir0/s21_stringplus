#include "s21_string.h"

void* s21_memchr(const void* str, int c, s21_size_t n) {
  const char* ptr = (const char*)str;
  void* result = S21_NULL;
  s21_size_t i = 0;
  while (i < n && ptr) {
    if (*ptr == (char)c) {
      result = (void*)ptr;
      break;
    }
    ptr++;
    i++;
  }
  return result;
}