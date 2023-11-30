#include "s21_tests.h"

const char *s21_strpbrk(const char *str1, const char *str2);

START_TEST(s21_strpbrk_test) {
  const char str_for_strpbrk[] = "stetic Asian";
  const char str_oneof[] = "asit";
  ck_assert_str_eq(s21_strpbrk(str_for_strpbrk, str_oneof), "stetic Asian");

  const char str_for_strpbrk2[] = "hello world";
  const char str_oneof2[] = "zxq";
  ck_assert_pstr_eq(s21_strpbrk(str_for_strpbrk2, str_oneof2), S21_NULL);
}
END_TEST

Suite *suite_strpbrk(void) {
  Suite *s = suite_create("suite_strpbrk");
  TCase *tc = tcase_create("strpbrk_tc");

  tcase_add_test(tc, s21_strpbrk_test);
  suite_add_tcase(s, tc);
  return s;
}
