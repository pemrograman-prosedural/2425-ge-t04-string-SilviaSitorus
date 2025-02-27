// 12S24002 - Petra Ignatius Pengayoman Naibaho
// 12S24004 - Silvia Eklesiana Sitorus

#include <stdio.h>

int main() {
  char input[21];
  fgets(input, sizeof(input), stdin);

  for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++) {
    printf("%03d", input[i]);
  }
  printf("013\n");

  return 0;

}