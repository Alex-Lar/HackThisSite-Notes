#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *encrypt(char *string) {
  int len = strlen(string);
  char *encoding = (char *)malloc((len + 1) * sizeof(char));

  if (encoding == NULL) {
    printf("Error: memory allocation  failure.");
    return NULL;
  }

  for (int i = 0; i < len; i++) {
    encoding[i] = ((int)string[i]) + i;
  }

  encoding[len] = '\0';
  return encoding;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("usage: %s <string>\n", argv[0]);
    return 0;
  }

  for (int i = 1; i < argc; i++) {
    char *encoding = encrypt(argv[i]);
    printf("%s: '%s'\n", argv[i], encoding);
    free(encoding);
  }

  return 0;
}
