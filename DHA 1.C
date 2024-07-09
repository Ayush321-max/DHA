//Check what is the size of an array with, say, 5 integers and verify the size of an integer is 4 bytes

#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    //printing addresses of all elements in the array
    printf("Addresses of element in the array:\n");
    for (int i = 0: i<5; ++i)

    {
        printf("Address of arr[%d]: %u\n", i, &arr[i]);

    }

    return 0;
    
}