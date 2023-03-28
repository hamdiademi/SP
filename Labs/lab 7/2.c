#include <stdio.h>

int main()
{
    int n,m,i,j;
    scanf("%d%d", &n, &m);

    int matrix[100][100];
    double matrix_1[100][100],min,max;

    for(i=0; i < n; i++)
    {
        for(j=0; j < m; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0; i < m; i++)
    {
        min=max=matrix[0][i];
        for(j=0; j < n; j++)
        {
            if(matrix[j][i] < min)
            {
                min = matrix[j][i];
            }
            if(matrix[j][i] > max)
            {
                max = matrix[j][i];
            }
        }

        for(j=0; j < n; j++)
        {
            matrix_1[j][i] = (matrix[j][i] - min) / (max - min);
        }
    }

    for(i=0; i < n; i++)
    {
        for(j=0; j < m; j++)
        {
            printf("%.2lf ", matrix_1[i][j]);
        }
        printf("\n");
    }

    return 0;
}