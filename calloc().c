// C code of calloc() function.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);//5
    
    // Dynamically allocate memory using calloc() and initialize to zero
    arr = (int*)calloc(n, sizeof(int));
    
    // Check if the memory has been successfully allocated by calloc or not
    if (arr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    
    // Get the elements of the array
    for (i = 0; i < n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    // Print the elements of the array
    printf("The elements of the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // Deallocate the memory
    free(arr);
    
    return 0;
}
