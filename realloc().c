// realloc() function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, new_size, i;
    
    printf("Enter the initial number of elements: ");
    scanf("%d", &n);
    
    // Dynamically allocate memory using malloc()
    arr = (int*)malloc(n * sizeof(int));
    
    // Check if the memory has been successfully allocated by malloc or not
    if (arr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    
    // Get the elements of the array
    for (i = 0; i < n; i++)
    {
        arr[i] = i; // Assigning values for demonstration
    }
    
    // Resize the array using realloc()
    printf("Enter the new size of the array: ");
    scanf("%d", &new_size);
    
    arr = (int*)realloc(arr, new_size * sizeof(int));
    
    // Check if the memory has been successfully reallocated by realloc or not
    if (arr == NULL) {
        printf("Memory not reallocated.\n");
        exit(0);
    }
    
    // Print the elements of the array
    printf("The elements of the array are: ");
    for (i = 0; i < new_size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // Deallocate the memory
    free(arr);
    
    return 0;
}
