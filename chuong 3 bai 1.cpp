#include <stdio.h>
#include <string.h>

int main1() {
    char s1[20] = "Truong DHCT", s2[10] = "Tp.HCM", input[30], s3[10];

    strcpy(input, s1);
    strcpy(s3, "aeiou");
    strcat(input, s2);

    int n = strlen(input), k = 0;

    printf("Chuoi: %s", input);

    for (int i = 0; i < n; i++) {
        if (strchr(s3, input[i])) {
            k++;
        }
    }

    printf("\nKet qua: %d", k);

    return 0;
}
