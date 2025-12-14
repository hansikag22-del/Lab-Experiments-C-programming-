#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q;
    int i, j, k;

    // Input dimensions of Matrix A
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    // Input dimensions of Matrix B
    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    // Check compatibility: n must be equal to p
    if (n != p)
    {
        printf("\nMatrix multiplication is not possible.\n");
        printf("Number of columns of Matrix A (%d) must equal number of rows of Matrix B (%d).\n", n, p);
        return 1; // Exit the program
    }

    // Input Matrix A
    printf("\nEnter elements of Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
      {
        scanf("%d", &A[i][j]);
      }  
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C to 0
    for (i = 0; i < m; i++)
    {
       for (j = 0; j < q; j++)
       {
        C[i][j] = 0;
       } 
    }

    // Matrix Multiplication: C = A * B
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < q; j++)
      {
        for (k = 0; k < n; k++)
        {
            C[i][j] += A[i][k] * B[k][j];
        }
      }  
    }

    // Print Matrix A
    printf("\nMatrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++)
    {
       for (j = 0; j < n; j++)
       {
        printf("%5d", A[i][j]);
       } 
       printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
           printf("%5d", B[i][j]); 
        }
        printf("\n");
    }

    // Print Result Matrix C
    printf("\nResultant Matrix C = A * B (%d x %d):\n", m, q);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
           printf("%5d", C[i][j]); 
        }
        printf("\n");
    }
    return 0;
}

