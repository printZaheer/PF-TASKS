#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 4

int main() {
                int A[SIZE][SIZE], B[SIZE][SIZE];
                char Output[SIZE][SIZE][10]; // store strings like "1/5"
                int i, j;
                int symmetric = 1;

                srand(time(0));

                // Step 1: Random Matrix A
                printf("Matrix A:\n");
                for (i = 0; i < SIZE; i++)
                {
                    for (j = 0; j < SIZE; j++)
                    {
                        A[i][j] = rand() % 10 + 1;
                        printf("%2d ", A[i][j]);
                    }
                    printf("\n");
                }

                // Step 1: Random Matrix B
                printf("\nMatrix B (before diagonal replace):\n");
                for (i = 0; i < SIZE; i++)
                {
                    for (j = 0; j < SIZE; j++)
                    {
                        B[i][j] = rand() % 10 + 1;
                        printf("%2d ", B[i][j]);
                    }
                    printf("\n");
                }

                // Step 2: Replace diagonal
                for (i = 0; i < SIZE; i++)
                {
                    B[i][i] = A[i][i];
                }

                printf("\nMatrix B (after diagonal replace):\n");
                for (i = 0; i < SIZE; i++)
                {
                    for (j = 0; j < SIZE; j++)
                    {
                        printf("%2d ", B[i][j]);
                    }
                    printf("\n");
                }

                // Step 3: Output Matrix = "1/value"
                printf("\nOutput Matrix:\n");
                for (i = 0; i < SIZE; i++)
                {
                    for (j = 0; j < SIZE; j++)
                    {
                        sprintf(Output[i][j], "1/%d", B[i][j]); // no float
                        printf("%s ", Output[i][j]);
                    }
                    printf("\n");
                }

                // Step 4: Symmetry check (string compare)
                for (i = 0; i < SIZE; i++)
                {
                    for (j = 0; j < SIZE; j++)
                    {
                        if (strcmp(Output[i][j], Output[j][i]) != 0)
                        {
                            symmetric = 0;
                            break;
                        }
                    }
                }

                if (symmetric)
                    printf("\nOutput matrix IS symmetric.\n");
                else
                    printf("\nOutput matrix is NOT symmetric.\n");

                return 0;
}