#include <stdio.h>

void mergesort();
void merge();

int main (){

    int arr[40], n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    mergesort(arr, 0, n-1);

    printf("sorted elements are: ");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);

        return 0;
}

void mergesort(int arr[], int first, int last)
{
    int mid;
    if(first<last)
    {
        mid=(first+last)/2;
        mergesort(arr, first, mid);
        mergesort(arr, mid+1, last);
        merge(arr,first,mid,last);
    }
}

void merge(int arr[], int first, int mid, int last)
{
    int b[50];
    int i,j,k;
    i = first; j = mid; k = first;

    while (i<=mid&&j<=last)
    {
        if(arr[i]<=arr[j])
        b[k++]=arr[i++];
        else
            b[k++]=arr[j++];

    }
    if(i>mid)
    {
        while(j<=last)
            b[k++]=arr[j++];
    }
    else
    {
        while(i<=mid)
        b[k++]=arr[i++];
    }
    for(i=first;i=last;i++)
        arr[i]=b[i];

}
