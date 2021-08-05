#include<stdio.h>
// There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming
// 1. malloc() -> memory allocation
// 2. calloc() -> contiguous allocation
// 3. free() -> de-allocate
// 4. realloc() -> re-allocation
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int* ptr;
    int n, i;

    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Entered number of elements: %d\n", n);

    // dynamically allocate memory using malloc()
     ptr = (int*)malloc(n*sizeof(int));

    // dynamically allocate memory using calloc()
    // ptr = (int*)calloc(n, sizeof(int));

    if(ptr == NULL) {
        printf("Failed to allocate memory.\n");
        exit(0);
    }
    printf("Memory allocated successfully.\n");

    // for malloc()-> garbage value and calloc() -> 0
    printf("The initial values of the array are:");
    for(i = 0; i < n; i++)
        printf("%d, ", ptr[i]);
    printf("\n");

    // push the elements in the array
    for(i = 0; i < n; i++)
        ptr[i] = i + 1;

    printf("The elements of the array are:");
    for(i = 0; i < n; i++)
        printf("%d, ", ptr[i]);
    printf("\n");

    // realloc()
    // if the memory previously allocated with the help of malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory. new blocks will be initialized with the default garbage value.

    n = 10;
    ptr = realloc(ptr, n * sizeof(int));
    if(ptr == NULL) {
        printf("Failed to allocate memory using realloc().\n");
        exit(0);
    }
    printf("Memory successfully re-allocated using realloc()");

    for(i = 5; i < n; i++)
        ptr[i] = i + 1;
    printf("The new elements of the array are:");
    for(i = 5; i < n; i++)
        printf("%d, ", ptr[i]);
    printf("\n");

    // free()
    // The memory allocated using functions malloc() and calloc() is not de-allocated on their own. whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.
    free(ptr);
    printf("Dynamic memory successfully freed.\n");

    return 0;
}