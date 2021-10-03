#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int *N = malloc(n * sizeof(int)), *M = malloc(m * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &M[i]);
    }

    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (M[j] > N[n - 1])
            {
                printf("%d\n", n);
                break;
            }
            if (M[j] < N[0])
            {
                printf("0\n");
                break;
            }
            if (N[i] < M[j] && M[j] <= N[i + 1])
            {
                printf("%d\n", i + 1);
                break;
            }          
        }
    }
    return 0;
}
