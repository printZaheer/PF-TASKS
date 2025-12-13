#include <stdio.h>
#include <stdlib.h>

int* allocateMemory(int count) {
    if (count <= 0) return NULL;

    int *list = (int*) malloc(count * sizeof(int));
    if (!list) {
        printf("Error: Unable to allocate memory.\n");
        return NULL;
    }
    return list;
}

void fillData(int arr[], int count) {
    if (!arr || count <= 0) return;

    for (int i = 0; i < count; i++) {
        int num;
        while (1) {
            printf("Enter number of books in section %d: ", i + 1);

            if (scanf("%d", &num) != 1) {
                int t;
                while ((t = getchar()) != '\n' && t != EOF) {}
                printf("  Invalid input. Please enter a non-negative value.\n");
                continue;
            }

            if (num < 0) {
                printf("  Value cannot be negative.\n");
                continue;
            }

            arr[i] = num;
            break;
        }
    }
}

void showData(const int arr[], int count) {
    printf("\n--- Library Sections ---\n");

    if (!arr || count <= 0) {
        printf("No sections available.\n");
        printf("Total sections: 0\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("Section %d: %d books\n", i + 1, arr[i]);
    }
    printf("Total sections: %d\n", count);
}

int* appendSections(int arr[], int oldCount, int extra) {
    if (extra <= 0) return arr;

    int updatedSize = oldCount + extra;

    int *extended = (int*) malloc(updatedSize * sizeof(int));
    if (!extended) {
        printf("Error: Memory allocation failed while expanding list.\n");
        return arr;
    }

    for (int i = 0; i < oldCount; i++)
        extended[i] = arr[i];

    free(arr);

    for (int i = oldCount; i < updatedSize; i++) {
        int num;

        while (1) {
            printf("Enter number of books for NEW section %d: ", i + 1);

            if (scanf("%d", &num) != 1) {
                int t;
                while ((t = getchar()) != '\n' && t != EOF) {}
                printf("  Invalid input. Enter a non-negative integer.\n");
                continue;
            }

            if (num < 0) {
                printf("  Value must be zero or greater.\n");
                continue;
            }

            extended[i] = num;
            break;
        }
    }

    return extended;
}

int countSectionsWithBooks(const int arr[], int count) {
    int c = 0;
    for (int i = 0; i < count; i++)
        if (arr[i] > 0)
            c++;
    return c;
}

int* removeEmptySections(int arr[], int size, int *newSize) {
    if (!newSize) return arr;

    int valid = countSectionsWithBooks(arr, size);
    *newSize = valid;

    if (valid == 0) {
        free(arr);
        return NULL;
    }

    int *filtered = (int*) malloc(valid * sizeof(int));
    if (!filtered) {
        printf("Error: Memory allocation failed while filtering.\n");
        *newSize = size;
        return arr;
    }

    int index = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] > 0)
            filtered[index++] = arr[i];

    free(arr);
    return filtered;
}

int main(void) {
    int total;

    printf("Enter current number of library sections: ");
    while (scanf("%d", &total) != 1 || total < 0) {
        int t;
        while ((t = getchar()) != '\n' && t != EOF) {}
        printf("Please enter a valid non-negative number: ");
    }

    int *sections = NULL;
    if (total > 0) {
        sections = allocateMemory(total);
        if (!sections) return 1;

        fillData(sections, total);
    }

    printf("\nInitial sections data:\n");
    showData(sections, total);

    int extra;
    printf("\nEnter number of new sections to add: ");
    while (scanf("%d", &extra) != 1 || extra < 0) {
        int t;
        while ((t = getchar()) != '\n' && t != EOF) {}
        printf("Please enter a non-negative number: ");
    }

    if (extra > 0) {
        sections = appendSections(sections, total, extra);
        total += extra;
    }

    printf("\nAfter adding new sections:\n");
    showData(sections, total);

    int finalCount = 0;
    sections = removeEmptySections(sections, total, &finalCount);

    printf("\nAfter removing sections with zero books:\n");
    showData(sections, finalCount);

    if (sections) free(sections);

    return 0;
}
