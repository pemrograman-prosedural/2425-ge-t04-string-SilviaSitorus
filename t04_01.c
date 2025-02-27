// 12S24002 - Petra Ignatius Pengayoman Naibaho
// 12S24004 - Silvia Eklesiana Sitorus

#include <stdio.h>
int main() {
    char str[61];
    scanf("%60s", str);
    
    for (int i = 0; str[i] != '\0'; i += 3) {
        int ascii_value = ((str[i] - '0') * 100 + (str[i+1] - '0') * 10 + (str[i+2] - '0'));
        printf("%c", ascii_value);
    }
    
    printf("\n");
    return 0;
}