/*This code is an implementation of insertion sort.
This is not an efficient implementation of the Insertion sort.
Complexity: O(n^3)
First check all elements then push at the end:-In this technique, the 'a[num]' is the element of interest that is compared with the
elements to the left of its position. If the elements are greater then keep on checking until you reach the
start of the array. If any element is smaller than a[num] then push the bigger elements to the right and place
a[num] at the right place.
There is one more issue with this code, if the a[num] is greater than the element to the left of it in the very
first iteration, then ideally it should never call pushSort(). But it does, thankfully pushSort() function takes
care of this case.
A better implementation is here: https://www.geeksforgeeks.org/insertion-sort/
*/
#include <stdio.h>
void printArr(int arr[])
{
    int i;
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
    len = sizeof(a)/sizeof(int);
    printf("\nLength  is:%d",len);
  for(num = 1; num < len ; num++)
  {
    prev = num - 1;
    while(prev != -1)
    {
      if(a[num] < a[prev])
      {
        prev--;
      }
      else
        break;
    }
    pushSort(a,num,prev);
   prev = num - 1;
  }
  printArr(a);
  return 0;
}
