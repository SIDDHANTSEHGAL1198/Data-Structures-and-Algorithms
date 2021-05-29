#include <stdio.h>

int main()
{
    int row1,col1,row2,col2;
    printf("Enter no of rows in first array\n");
    scanf("%d",&row1);
    printf("Enter no of columns in first array\n");
    scanf("%d",&col1);
    int mat1[100][100];
    int mat2[100][100];
    int mul[100][100];
    int i,j;
    printf("Enter array elements in first 2D array\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    
    printf("Enter no of rows in second array\n");
    scanf("%d",&row2);
    printf("Enter no of columns in second array\n");
    scanf("%d",&col2);
    
    printf("Enter array elements in second 2D array\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    
    int r=0,c=0;
    r=row1;
    c=col2;
    int k;
    
    if(col1!=row2)
    {
        printf("Array multiplication not possible as columns in first matrix is not same as rows in second matrix\n");
    }
    else
    {
      for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<c;k++)
            {
                mul[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    
    
    printf("Array after multiplication\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }  
    }
    
    
    return 0;
}
