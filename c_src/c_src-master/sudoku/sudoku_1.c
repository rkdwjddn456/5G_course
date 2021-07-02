#include <stdio.h>

int main()
{
    int arr[9][9];
    int i, j;
    FILE  *fp = fopen("sudoku.txt", "w");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            printf("정수 입력");
            scanf("%d", &arr[i][j]);
            getchar();
            fprintf(fp, "%d", arr[i][j]);
            if (j == 8)
            printf("\n");
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 0;
} 