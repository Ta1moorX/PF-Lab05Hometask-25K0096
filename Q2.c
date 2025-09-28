#include <stdio.h>

int main() {
    int powerOn;
    char lightColor;
    printf("Enter power (1 for ON, 0 for OFF): ");
    scanf("%d", &powerOn);

    if (powerOn == 1) {
        printf("Enter light color (R/Y/G): ");
        scanf(" %c", &lightColor);

        if (lightColor == 'R') {
            printf("Stop\n");
        } else if (lightColor == 'Y') {
            printf("Caution\n");
        } else if (lightColor == 'G') {
            printf("Go\n");
        } else {
            printf("Invalid color\n");
        }
    } else {
        printf("Signal Off\n");
    }

    return 0;
}