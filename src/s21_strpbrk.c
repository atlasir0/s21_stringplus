#include "s21_string.h"

const char *s21_strpbrk(const char *str1, const char *str2) {
  const char *buffer = NULL;
  for (s21_size_t i = 0; i < s21_strlen(str1); i++) {
    for (s21_size_t j = 0; j < s21_strlen(str2); j++) {
      if (str1[i] == str2[j]) {
        buffer = &str1[i];
        j = s21_strlen(str2);
        i = s21_strlen(str1);
      }
    }
  }
  return buffer;
}