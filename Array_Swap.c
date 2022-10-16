#include<stdio.h>
#include<stdlib.h>
int *swap(int arr[],int a,int b)
{
    int c=arr[a];
    arr[a]=arr[b];
    arr[b]=c;
    return arr;
}
void PrintArray(int *arr,int l)
{
    for (int i = 0; i < l; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,1,2,3,4,1};
    int *arr2=swap(arr,0,3);
    int l = sizeof(arr)/sizeof(int);
    PrintArray(arr2,l);
    return(0);
}
