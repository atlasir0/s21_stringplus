#include "s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  if (s21_strlen(haystack) >= s21_strlen(needle)) {
    s21_size_t i = 0;
    while (i <= s21_strlen(haystack) - s21_strlen(needle)) {
      int found = 1;
      s21_size_t m = i, r = 0;
      while (needle[r] && haystack[m] == needle[r]) {
        m++;
        r++;
      }
      if (needle[r] != '\0') {
        found = 0;
      }
      if (found) {
        return (char *)(haystack + i);
      }
      i++;
    }
  }
  return S21_NULL;
}