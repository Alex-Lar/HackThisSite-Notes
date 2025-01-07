#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *decrypt(char *string) {
  int len = strlen(string);
  char *decoding = (char *)malloc((len + 1) * sizeof(char));

  if (decoding == NULL) {
    printf("Error: memory allocation  failure.");
    return NULL;
  }

  for (int i = 0; i < len; i++) {
    decoding[i] = ((int)string[i]) - i;
  }

  decoding[len] = '\0';
  return decoding;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("usage: %s <string>\n", argv[0]);
    return 0;
  }

  for (int i = 1; i < argc; i++) {
    char *decoding = decrypt(argv[i]);
    printf("%s: '%s'\n", argv[i], decoding);
    free(decoding);
  }


  return 0;
}
