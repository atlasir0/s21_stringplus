#include "s21_string.h"

int left_side(const char *src, const char *trim_chars, int last) {
  int res = 0;
  int size = s21_strlen(trim_chars);
  for (int i = 0; i < size; i++) {
    if (src[last] == trim_chars[i]) {
      res = 1;
      break;
    }
  }
  return res;
}
int right_side(const char *src, const char *trim_chars, int last) {
  int res = 0;
  last--;
  int size = s21_strlen(trim_chars);
  for (int i = 0; i < size; i++) {
    if (src[last] == trim_chars[i]) {
      res = 1;
      break;
    }
  }
  return res;
}

void *s21_trim(const char *src, const char *trim_chars) {
  char *arr = S21_NULL;
  if (trim_chars == S21_NULL) {
    return S21_NULL;
  }
  if (src != S21_NULL) {
    if (trim_chars[0] != '\0') {
      arr = (char *)malloc((s21_strlen(src) + 1) * sizeof(char));
      if (arr != S21_NULL) {
        s21_size_t begin = 0, last = s21_strlen(src);
        while (left_side(src, trim_chars, begin)) {
          begin++;
        }
        if (begin != last) {
          while (right_side(src, trim_chars, last)) {
            last--;
          }
        } else {
          arr[0] = '\0';
        }
        s21_size_t arr_index = 0;
        for (s21_size_t i = begin; i < last; i++) {
          arr[arr_index] = src[i];
          arr_index++;
        }
        arr[arr_index] = '\0';
      }
    } else {
      arr = s21_trim(src, "\t\n ");
    }
  }
  return arr;
}