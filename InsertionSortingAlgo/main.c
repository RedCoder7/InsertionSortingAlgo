//dsffsfThis code is an implementation of insertion sort.
#include <stdio.h>
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
    puts("Output array is:");
  int i;
  for(i =0 ; i < 5; i++ )
  {
    printf("%d ",a[i]);
  }
}
int main()
{
  int a[] = {19,700,-10,99,2};
  int x, num, prev, len;
  x = 0;
  len = 5;
  num = 1;
  prev = num - 1;
  for(x = 1; x < len ; x++)
  {
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
    num++;
    prev = num - 1;
  }
  return 0;
}
