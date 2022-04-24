#include<stdio.h> 

int main() 
{ 
    int a[3][3],b[3][3],c[3][3]; 
    int i,j;  
    printf("Enter elements of 1st matrix:\n");  //creating a matrix
    for (i = 0; i < 2; i++)  
    { 
        for (j = 0; j < 2; j++) 
        {  
            scanf("%d", &a[i][j]);  
        }  
    }  
    
    printf("Enter elements of 2nd matrix:\n");  //creating a matrix
    for (i = 0; i < 2; i++)  
    { 
        for (j = 0; j < 2; j++) 
        {
            scanf("%d", &b[i][j]);  
        }  
    }  

for (i = 0; i < 2; ++i)  //creating a matrtix where the elements are the sum of corresponding elements in a and b matrices
    { 
        for (j = 0; j < 2; ++j)
            { 
                c[i][j] = a[i][j] + b[i][j];  
            }  
    } 

for (i = 0; i < 2; ++i)  //printing the c matrix

    { 
         printf("\n"); 
         for (j = 0; j < 2; ++j)
            {  
                printf("%d\t",c[i][j]); 
            }  
        printf("\n"); 
    } 

return 0; 

}
