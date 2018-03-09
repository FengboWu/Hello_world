#include <stdio.h>
void insert_sort(int arr[],int n);
int main()
{
int i;
int arr[5] = {20,30,24,40,35};
insert_sort(arr,5);
for(i=0;i<5;i++)
{
printf("%4d",arr[i]);
}
}
void insert_sort(int arr[],int n)
  {
    int i, j;
    int temp = 0;
    for(i = 1;i < n;i++)
    {
       temp = arr[i];
       for(j = i; j>0&&temp<arr[j-1];j--)
          {
           if(temp<arr[j-1])
           {
           arr[j] = arr[j-1];
           }
          }
       arr[j] = temp;
    }
  }
