#include "s21_string.h"

void* s21_to_lower(const char* str) {
  if (str == S21_NULL) {
    return S21_NULL;
  }
  s21_size_t len = 0;
  while (str[len] != '\0') {
    len++;
  }
  char* result = (char*)malloc((len + 1) * sizeof(char));
  if (result == S21_NULL) {
    return S21_NULL;
  }
  for (s21_size_t i = 0; i < len; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      result[i] = str[i] + 32;
    } else {
      result[i] = str[i];
    }
  }
  result[len] = '\0';
  return result;
}