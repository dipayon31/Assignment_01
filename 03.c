// 2012082

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * (sizeof(int)));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l, m;
    printf("Enter no. of rows and columns: ");
    scanf("%d %d", &l, &m);
    if (l * m != n)
    {
        printf("2D matrix cannot be formed.\n");
    }
    else if (l * m == n)
    {
        int arr2[l][m];
        int index = 0;
        for(int i=0; i<l; i++){
            for(int j=0; j<m; j++){
                arr2[i][j] = arr[index];
                index++;
            }
        }
        printf("The 2D matrix is \n");
        for(int i=0; i<l; i++){
            for(int j=0; j<m; j++){
                printf("%d ", arr2[i][j]);
            }
            printf("\n");
        }

    }
    free(arr);
}