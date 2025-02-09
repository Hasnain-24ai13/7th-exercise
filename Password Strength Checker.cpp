#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidPassword(char password[]) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0;

    if (length < 8) return 0;

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        if (islower(password[i])) hasLower = 1;
        if (isdigit(password[i])) hasDigit = 1;
    }

    return hasUpper && hasLower && hasDigit;
}

int main() {
    char password[50];

    while (1) {
        printf("Enter a strong password: ");
        scanf("%s", password);

        if (isValidPassword(password)) {
            printf("Password is strong!\n");
            break;
        } else {
            printf("Weak password! Requirements:\n");
            if (strlen(password) < 8) printf("- At least 8 characters long\n");
            if (!strpbrk(password, "ABCDEFGHIJKLMNOPQRSTUVWXYZ")) printf("- At least one uppercase letter\n");
            if (!strpbrk(password, "abcdefghijklmnopqrstuvwxyz")) printf("- At least one lowercase letter\n");
            if (!strpbrk(password, "0123456789")) printf("- At least one number\n");
        }
    }

    return 0;
}
