#include <iostream>
using namespace std;

bool strncat(char *s1, size_t s1sz, const char *s2) {

  size_t len1 = 0;
  while (s1[len1] != '\0' && len1 < s1sz) {
    len1++;
  }

  size_t len2 = 0;
  while (s2[len2] != '\0') {
    len2++;
  }

  if (len1 + len2 + 1 > s1sz) {
    return false;
  }

  for (size_t i = 0; i < len2 && len1 + i < s1sz - 1; i++) {
    s1[len1 + i] = s2[i];
  }

  s1[len1 + len2] = '\0';
  return true;
}
