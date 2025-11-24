#include <stdio.h>
#include <string.h>

enum Menu {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char choice[20];
    int a, b;

    // Input format: ADD 10 20
    scanf("%s %d %d", choice, &a, &b);

    enum Menu m;

    if (strcmp(choice, "ADD") == 0)
        m = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        m = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        m = MULTIPLY;
    else {
        printf("Invalid choice");
        return 0;
    }

    switch (m) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
