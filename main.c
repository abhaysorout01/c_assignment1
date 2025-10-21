#include "mylib.c"
#include "arraylib.c"
#include <stdio.h>
int main() {
        int choice, num;
        int arr[] = {12, 70, 153, 13, 23};
        int n = 5;
        int brr[n];
        CopyArray(arr, brr, n);
        int lin;
    do {
        printf("\nChoose Your Required Operation:\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Array Operations\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 5) {
            printf("Exiting program. \nGoodbye!\n");
            break;
        }
        if(choice >=1 && choice <=3){
            printf("Enter a number:");
            scanf("%d", &num);
        }
        switch (choice) {
            case 1:
                if (isArmstrong(num)) {
                    printf("%d is an Armstrong number.\n", num);
                    printf("----------------------------------\n");
                }
                else {
                    printf("%d is NOT an Armstrong number.\n", num);
                    printf("----------------------------------\n");
                }
                break;
            case 2:
                if (isAdams(num)) {
                    printf("%d is an Adams number.\n", num);
                    printf("----------------------------------\n");
                }
                else {
                    printf("%d is NOT an Adams number.\n", num);
                    printf("----------------------------------\n");
                }
                break;
            case 3:
                if (isPrimePalindrome(num)) {
                    printf("%d is a Prime Palindrome number.\n", num);
                    printf("----------------------------------\n");
                }
                else {
                    printf("%d is NOT a Prime Palindrome number.\n", num);
                    printf("----------------------------------\n");
                }
                break;
            case 4:
                displayArray(arr, n);
                printf("Max Index: %d\n", findMaxIndex(arr, n));
                printf("Min Index: %d\n", findMinIndex(arr, n));
                printf("Average: %.2f\n", findAverage(arr, n));
                reverseArray(arr, n);
                printf("Reversed array: "); displayArray(arr, n); CopyArray(brr, arr, n);   
                sortArray(arr, n);
                printf("Sorted array: "); displayArray(arr, n); CopyArray(brr, arr, n);
                printf("Enter value to search: ");
                scanf("%d", &num);
                lin = linearSearch(arr, n, num);
                if (lin == -1)
                    printf("Not found.\n");
                else
                    printf("Found at index %d.\n", lin);
                break;
            default:
                printf("Invalid choice! Please select between 1 - 4 only.\n");
                printf("----------------------------------\n");
        }
    } while (choice != 5);
    return 0;
}
