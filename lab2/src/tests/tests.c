#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "revert_string.h"

void testRevertString(void) {
  char simple_string[] = "Hello";
  char str_with_spaces[] = "String with spaces";
  char str_with_odd_chars_num[] = "abc";
  char str_with_even_chars_num[] = "abcd";

  RevertString(simple_string);
  assert(0 == strcmp(simple_string, "olleH"));

  RevertString(str_with_spaces);
  assert(0 == strcmp(str_with_spaces, "secaps htiw gnirtS"));

  RevertString(str_with_odd_chars_num);
  assert(0 == strcmp(str_with_odd_chars_num, "cba"));

  RevertString(str_with_even_chars_num);
  assert(0 == strcmp(str_with_even_chars_num, "dcba"));

}

int main() {
  testRevertString();
  return 0;
}
