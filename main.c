#include <stdio.h>

    int main() {
    int i, j, k, n;
    float matrix[20][20], x[10], t, sum = 0.0;
    printf("\nEnter the elemnets of augmented matrix: \n\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++) 
    {
        for(j=1; j<=(n+1); j++) 
        {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }    
    }
    for(j=1; j<=n; j++)
        for(i=1; i<=n; i++) 
        {
            if(i>j) 
            {
                t = matrix[i][j]/matrix[j][j];
                for(k=1; k<=n+1; k++) 
                {
                    matrix[i][k] = matrix[i][k]-t*matrix[j][k];
                }               
            }
        }    
    x[n] = matrix[n][n+1]/matrix[n][n];

    for(i=n-1; i>=1; i--) 
    {
        sum = 0;
        for(j=i+1; j<=n; j++) 
        {
            sum = sum+matrix[i][j]*x[j];
        }
        x[i] = (matrix[i][n+1]-sum)/matrix[i][i];
    }
    printf("\n The solution is: \n");
    for(i=1; i<=n; i++) 
    {
            printf("\nx%d=%f\t", i, x[i]);
    }
    return 0;
}