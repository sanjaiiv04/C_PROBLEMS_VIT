#include <stdio.h>
struct grocery
{
    int prod_no;
    float prod_price;
    int prod_units;
    char prod_name[20];
    float prod_total;
    float prod_disc;
    float prod_net;
};
void func(struct grocery arr[]);
 int n;

int main()
{
    printf("Enter number of products:"); scanf("%d",&n);
    struct grocery arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d %f %d %s",&arr[i].prod_no,&arr[i].prod_price,&arr[i].prod_units,arr[i].prod_name);
    }
    func(arr);

}
void func(struct grocery arr[])
{
    for (int i=0;i<n;i++)
    {
        arr[i].prod_total = arr[i].prod_price * arr[i].prod_units;
        if (arr[i].prod_total>=1000 && arr[i].prod_total<2000) 
        {
            arr[i].prod_disc = 0.1 * arr[i].prod_total;
            
        }
        else if (arr[i].prod_total>=2000)
        {
            arr[i].prod_disc = 0.2 * arr[i].prod_total;
        }
        arr[i].prod_net = arr[i].prod_total - arr[i].prod_disc;
    }
    for (int i=0;i<n;i++)
    {
        printf("\n%d %s %.2f %d %.2f %.2f %.2f",arr[i].prod_no,arr[i].prod_name,arr[i].prod_price,arr[i].prod_units,arr[i].prod_total,arr[i].prod_disc,arr[i].prod_net);
    }
}