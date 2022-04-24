#include <stdio.h>
#include <math.h>
int n;
float std(int *x);
int main()
{
    int elements;
    printf("Enter number of datapoints:"); scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter datapoints:"); scanf("%d",&elements);
        arr[i] = elements;
    }
    std(arr);
}
float std(int *x)
{
    int total,numerator=0;
    float mean,rhs;
    for (int i=0;i<n;i++) total+=x[i];
    mean = total/n;
    for (int i=0;i<n;i++) numerator+=pow(x[i]-mean,2);
    rhs=numerator/n;
    printf("Variance of the given datapoints:%.3f",rhs);
    printf("\nStandard deviation of given datapoints:%.3f",sqrt(rhs));
}

