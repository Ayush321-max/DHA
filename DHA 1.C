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







//print the address of all the element in an array of 5 integers.
#include <stdio.h>

int main(){
    // Declare an array of 5 integers
    int arr[5];

    // Calculate the size of the array 
    size_t arr_size = sizeof(arr);

    //calculate the size of an integer 
    size_t int_size = sizeof(int);

    //Print the sizes 
    printf("Size of the array (5 integers): %u bytes\n", arr_size);
    printf("Size of an integer: %u bytes\n", int_size);

    return 0;
    
}