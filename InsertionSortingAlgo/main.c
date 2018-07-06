//dsffsfThis code is an implementation of insertion sort.
#include <stdio.h>
void printArr(int arr[])
{
    int i,length;
    length = sizeof(arr)/sizeof(int);
    printf("\nLength  is:%d",length);
    printf("\nOutput array is:");
    for(i =0 ; i < 5; i++ )
    {
    printf("%d ",arr[i]);
    }
}
void pushSort(int a[], int num,int prev)
{
  int temp = a[num];
  int sb = prev+1;  //sb = starting block
  while(num > sb)
  {
    a[num] = a[num-1];
    num--;
  }
  a[sb] = temp;
  printArr(a);
}
int main()
{
  int a[] = {5,3,4,1,2};
  int  num, prev, len;

//  len = 5;
    len = sizeof(a)/sizeof(int);
    printf("\nLength  is:%d",len);
//  num = 1;
//  prev = num - 1;
  for(num = 1; num < len ; num++)
  {
    prev = num - 1;
    while(prev != -1)
    {
      if(a[num] < a[prev])
      {
        prev--;
        printf("prev is %d", prev);
      }
      else
        break;
    }
    pushSort(a,num,prev);
//    num++;
//    prev = num - 1;
  }
  printArr(a);
  return 0;
}
