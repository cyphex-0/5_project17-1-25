#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}*/

int main()
{
    int n;
    char x;
    printf("Enter A for Ascending sort and B for Descending sort : ");
    scanf("%c", &x);
    if (toupper(x) == 'A')
    {
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        int arr[n];

        // printf("Enter %d integers\n", n);
        for (int i = 0; i < n; i++)
        {
            printf("enter the element no %d : ", i + 1);
            scanf("%d", &arr[i]);
        }

        // bubbleSort(arr, n);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        printf("Array sorted in ascending order: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        int arr[n];

        // printf("Enter %d integers\n", n);
        for (int i = 0; i < n; i++)
        {
            printf("enter the element no %d : ", i + 1);
            scanf("%d", &arr[i]);
        }

        // bubbleSort(arr, n);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        printf("Array sorted in descending order: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}