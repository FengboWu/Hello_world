/*Insert_sort to sort five random int numbers*/
#include <stdio.h>

void insert_sort(int arr[],int n);
int main()
    {
        int i;
        int arr[5] = {20,30,24,40,35};
        insert_sort(arr,5);    /*call function insert_sort()*/
        for(i = 0;i < 5;i++)
            printf("%4d",arr[i]);
    }
    
    
void insert_sort(int arr[],int n)
{
    int i, j;
    int temp = 0;
    for(i = 1;i < n;i++)
    {
        temp = arr[i];    /*take out a number from arr*/
        for(j = i; j > 0&&temp < arr[j-1];j--)
        {
	    //if the front number is larger,then move behind 
            if(temp < arr[j-1])
            {
                arr[j] = arr[j-1];
            }
        }
        //the taken out number take this empty seat
        arr[j] = temp;
     }
}
