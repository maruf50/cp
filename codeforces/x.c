#include <stdio.h>
#define MAX 9
int main() 
{
    int matrix[MAX][MAX], n, i, j, k, l,  reflexive = 1, irreflexive = 1,  symmetric = 1, antisymmetric = 1, transitive = 1 ;
    printf("Enter the number of elements (between 0 and 9) in the set:", MAX);
    scanf("%d", &n);
    if (n < 0 || n > MAX)
     {
    
        printf("Invalid input!\n");
        return 1; 
     }
    printf("Enter the %dx%d relation matrix (number between 0 and 9):\n", n, n);
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            do 
            {
                printf("\n", i, j);
                scanf("%d", &l);
                if (l < 0 || l > 9) 
                {
                    printf("Invalid input!\n");
                    return 1;
                }
            } while (l < 0 || l > 9);
            matrix[i][j] = (l > 0) ? 1 : 0;
        }
    }
    for (i = 0; i < n; i++) 
    {
        if (matrix[i][i] != 1)
            reflexive = 0;
        if (matrix[i][i] != 0)
            irreflexive = 0;
    }
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            
            if (matrix[i][j] != matrix[j][i])
                symmetric = 0;
            if (i != j && matrix[i][j] == 1 && matrix[j][i] == 1)
                antisymmetric = 0;
            if (matrix[i][j] == 1)
            {
                for (k = 0; k < n; k++) 
                {
                    if (matrix[j][k] == 1 && matrix[i][k] != 1)
                        transitive = 0;
                }
            }
        }
    }
    if (reflexive)
        printf("Reflexive\n");
    else
        printf(" Not Reflexive\n");

    if (irreflexive)
        printf("Irreflexive\n");
    else
        printf("Not Irreflexive\n");

    if (symmetric)
        printf("Symmetric\n");
    else
        printf("Not Symmetric\n");

    if (antisymmetric)
        printf("Antisymmetric\n");
    else
        printf("Not Antisymmetric\n");

    if (transitive)
        printf("Transitive\n");
    else
        printf("Not Transitive\n");

    return 0;
}