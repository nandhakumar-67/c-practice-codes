#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3, *ptr, i, sum = 0;

    ptr = (int*) malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);         // Read to ptr[i]
        sum += *(ptr + i);            // Add ptr[i] to sum
        printf("Sum after %d input(s): %d\n", i + 1, sum);
    }

    free(ptr); // Good practice to free allocated memory
    return 0;
}
