#include <stdio.h>

int main()
{
    int limit;
    int sea[50];
    int search;
    int found = 0;
    int i;

    printf("Enter the array limit: ");
    scanf("%d", &limit);

    printf("Enter %d numbers:\n", limit);
    for (i = 0; i < limit; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &sea[i]);
    }

    printf("Enter the search element: ");
    scanf("%d", &search);

    for (i = 0; i < limit; i++) {
        if (search == sea[i]) {
            found = 1;
            break;  // element found, exit loop
        }
    }

    if (found == 1) {
        printf("The element %d is found at position %d.\n", search, i + 1);
    } else {
        printf("The element %d is not found in the array.\n", search);
    }

    return 0;
}
