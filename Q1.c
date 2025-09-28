#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 5) {
        printf("Free Ticket\n");
    } else if (age >= 65) {
        printf("Discounted Ticket\n");
    } else {
        printf("Standard Ticket\n");
    }

    return 0;
}
