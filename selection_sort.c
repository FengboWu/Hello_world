#include <stdio.h>

void selection_sort(int arr[],int n);
int main()
    {  
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	selection_sort(arr,10);
	for(int i = 0;i < 10;i++){
	    printf("%d\t",arr[i]);
        }
        return 0;
    }  


void selection_sort(int arr[] ,int n)
{

    int temp,min;
    int i,j;
    for(i=0;j<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min=j;
            if(min=i){
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
        }
    }
}
