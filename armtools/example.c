// example.c
#include <stdio.h>
#include <stdlib.h>

#define ARRAYSIZE 1024
int a[ARRAYSIZE];
int b[ARRAYSIZE];
int c[ARRAYSIZE];
void subtract_arrays(int *restrict a, int *restrict b, int *restrict c)
{
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        a[i] = b[i] - c[i];
    }
}

int main() {
    for (int i = 0; i < ARRAYSIZE; i++)
    {
      // Generate a random number between 200 and 300
      b[i] = (rand() % 100) + 200;
      // Generate a random number between 0 and 100
      c[i] = rand() % 100;
    }

    subtract_arrays(a, b, c);

    printf("i \ta[i] \tb[i] \tc[i] \n");
    printf("=============================\n");

    for (int i = 0; i < ARRAYSIZE; i++)
    {
        printf("%d \t%d \t%d \t%d\n", i, a[i], b[i], c[i]);
    }

}
