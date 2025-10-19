#include<stdio.h>
#include "arraylib.c"
int main() {
 int n, choice, num;
 printf("Enter size of your array:");
 scanf("%d", &n);
 int a[n];
 for(int i = 0;i < n;i++) {
    printf("Enter the elemnt at index %d : ", i);
    scanf("%d", &a[i]);
 }
 int b[n];
 CopyArray(a, b, n);
 printf("Your array is: ");
 displayArray(a, n);
 printf("---------------------------");
 do {
        printf("\nChoose Your Required Option:\n");
        printf("1. Find Max Element at which index\n");
        printf("2. Find Min Element at which index\n");
        printf("3. Find Average of Elements in array\n");
        printf("4. Sort the array\n");
        printf("5. Search any value in the array\n");
        printf("6. Reverse the array\n");
        printf("7. Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 7) {
            printf("Exiting program. \nGoodbye!\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("Max element is at index %d\n", findMaxIndex(a,n));
                break;
            case 2:
                printf("Min element is at index %d\n", findMinIndex(a,n));
                break;
            case 3:
                printf("Average of the elemnts of array is %.2f\n", findAverage(a,n));
                break;
            case 4:
                sortArray(a,n);
                printf("Sorted array is:");
                displayArray(a,n);
                break;
            case 5:
                printf("Enter value to search:");
                int value;
                scanf("%d",&value);
                int index = linearSearch(a,n,value);
                if(index != -1) {
                printf("Element found at index %d\n",index);
                } else {
                printf("Element not found in the array\n");
                }
                break;
            case 6:
                reverseArray(a,n);
                printf("Reversed array is:");
                displayArray(a,n);
                break;
            default:
                printf("Invalid choice! Please select between 1 - 7 only.\n");
                printf("----------------------------------\n");
        }
        CopyArray(b, a, n);
    } while (choice != 7);
 return 0;
 }
