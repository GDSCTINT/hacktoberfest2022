#include<stdio.h>
#include<stdlib.h>
int ArraybinarySearch(int arr[],int l,int ele)
{
    int left=0;;
    int right=l-1;
    int mid;
    while(right>=left)
    {
        mid=(left+right)/2;
        if(ele>arr[mid])
            left=mid+1;
        else if(ele<arr[mid])
            right=mid-1;
        else
            return 1;
    }
    return 0;
}
int main()
{
    int arr[] = {1,2,3,2,1};
    int l = sizeof(arr)/sizeof(int);
    if(ArraybinarySearch(arr,l,3))
        printf("Found");
    else
        printf("Not Found");
    return(0);
}
