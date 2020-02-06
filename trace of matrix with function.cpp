#include <stdio.h>
void get_matrix(int m[20][20], int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d",&m[i][j]);
    }
}
void print_matrix(int m[20][20], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("\n\t");
	for(j=0;j<n;j++)
        {
            printf("%d\t",m[i][j]);
        }
    }
    printf("\n");
}
int main()
{
    int m[20][20], n, i, trace=0;
    printf("\nEnter the number of rows/columns for the square matrix (n*n): ");
    scanf("%d",&n);
    printf("\nEnter the elements for Matrix (%d * %d)\n",n,n);
    get_matrix(m,n);
    printf("\nMatrix Read:");	
    print_matrix(m,n);
    for(i=0;i<n;i++)
    {
        trace = trace + m[i][i];
    }
    printf("\nSum of diagonal elements (Trace) of the Matrix: %d\n",trace);
    return 0;
}
