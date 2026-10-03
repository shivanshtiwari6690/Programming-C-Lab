#include <stdio.h>

void display(int *arr, int n)
{
    int i;

    if (n == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");
}

void insertElement(int *arr, int *n, int position, int value)
{
    int i;

    for (i = *n; i > position; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }

    *(arr + position) = value;
    (*n)++;
}

int deleteElement(int *arr, int *n, int position, int *deleted)
{
    int i;

    if (*n == 0)
        return 0;

    *deleted = *(arr + position);

    for (i = position; i < *n - 1; i++)
    {
        *(arr + i) = *(arr + i + 1);
    }

    (*n)--;

    return 1;
}

int main()
{
    int arr[100];
    int n, i;
    int choice;
    int position, value, deleted;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(arr, n);
                break;

            case 2:
                if (n >= 100)
                {
                    printf("Array is full.\n");
                    break;
                }

                printf("Enter position (1 to %d): ", n + 1);
                scanf("%d", &position);

                if (position < 1 || position > n + 1)
                {
                    printf("Invalid position.\n");
                    break;
                }

                printf("Enter element: ");
                scanf("%d", &value);

                insertElement(arr, &n, position - 1, value);

                printf("Element inserted successfully.\n");
                break;

            case 3:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter position (1 to %d): ", n);
                scanf("%d", &position);

                if (position < 1 || position > n)
                {
                    printf("Invalid position.\n");
                    break;
                }

                if (deleteElement(arr, &n, position - 1, &deleted))
                {
                    printf("Deleted element = %d\n", deleted);
                }
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}