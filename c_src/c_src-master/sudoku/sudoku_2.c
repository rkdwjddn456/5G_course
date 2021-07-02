#include <stdio.h>
#include <Windows.h>
int isAvailable(int(*puzzle)[9], int row, int col, int num) // arr[i] = *(arr+i) 응용
{
    int rowStart = (row / 3) * 3;
    int colStart = (col / 3) * 3;
    int i;

    for (i = 0; i<9; i++)
    {
        if (*(*(puzzle + row) + i) == num) return 0; // arr[i] = *(arr+i) 응용
        if (*(*(puzzle + i) + col) == num) return 0;
        if (*(*(puzzle + rowStart + i % 3) + colStart + i / 3) == num) return 0;
    }
    return 1;
}

int fillSudoku(int(*puzzle)[9], int row, int col)
{
    int i;
    if (row<9 && col<9)
    {
        if (*(*(puzzle + row) + col) != 0)
        {
            if ((col + 1)<9) return fillSudoku(puzzle, row, col + 1);
            else if ((row + 1)<9) return fillSudoku(puzzle, row + 1, 0);
            else return 1;
        }
        else
        {
            for (i = 0; i<9; i++)
            {
                if (isAvailable(puzzle, row, col, i + 1))
                {
                    *(*(puzzle + row) + col) = i + 1;
                    if ((col + 1)<9)
                    {
                        if (fillSudoku(puzzle, row, col + 1)) return 1;
                        else *(*(puzzle + row) + col) = 0;
                    }
                    else if ((row + 1)<9)
                    {
                        if (fillSudoku(puzzle, row + 1, 0)) return 1;
                        else *(*(puzzle + row) + col) = 0;
                    }
                    else return 1;
                }
            }
        }
        return 0;
    }
    else return 1;
}

int main()
{
    int i, j;
    int startTickCount = GetTickCount();
    int currentTickCount;
    int result;
    int result_min;
    double result_sec;
    FILE *fp = fopen("sudoku.txt", "r");
    FILE *fs = fopen("result.txt", "w");
    char buf[20];
    int puzzle[9][9];

    for (j = 0; j< 9; j++)
    {
        fgets(buf, 20, fp);
        for (i = 0; i < 9; i++) puzzle[j][i] = buf[i] - 0x30; // 문서로 아스키코드 값을 받았으므로 0x30을 빼야함
    }

    if (fillSudoku(puzzle, 0, 0))
    {

        for (i = 1; i<10; ++i)
        {
            for (j = 1; j<10; j++) printf("%d", puzzle[i - 1][j - 1]);
            printf("\n");
        }
    }
    else printf("\n\nNO SOLUTION\n\n");
    currentTickCount = GetTickCount();
    result = (currentTickCount - startTickCount);
    result_min = (result / 1000) / 60;
    result_sec = (double)result / 1000;
    for (j = 0; j< 9; j++)
    {
        for (i = 0; i < 9; i++) buf[i] = puzzle[j][i] + 0x30; // 문서로 다시 보내기위해 아스키코드 0x30 더해야함
        fputs(buf, fs);
    }
    fprintf(fs, "시작 틱 카운트 : %lu\n", startTickCount);
    fprintf(fs, "현재 틱 카운트 : %lu\n", currentTickCount);
    fprintf(fs, "소요 시간  %lu\n", currentTickCount - startTickCount);
    fprintf(fs, "소요 시간  %d분: %f초\n", result_min, result_sec);
    fclose(fp);
    fclose(fs);
    return 0;
} 