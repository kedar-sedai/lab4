
//
//Program: To perform a binary search
 //Kedar sedai
 //   : Data structures using C and C++, Chap 2, Page 133


#include<stdio.h>
#include<stdlib.h>
#define size 10
#define loop  for (i = 0; i < num; i++)



int binsearch(int [], int, int, int);

int main() {
   int num, i, key, position;
   int low, high, list[size];

   printf("\nEnter the total number of elements");
   scanf("%d", &num);

   printf("\nEnter the elements of list :");
    loop    {
      scanf("%d", &list[i]);
   }

   low = 0;
   high = num - 1;

   printf("\nEnter element to be searched : ");
   scanf("%d", &key);

   position = binsearch(list, key, low, high);

   if (position != -1) {
      printf("\nNumber present at %d", (position + 1));
   } else
      printf("\n The number is not present in the list");
   return (0);
}

// Binary Search function
int binsearch(int a[], int x, int low, int high) {
   int mid;

   if (low > high)
      return -1;

   mid = (low + high) / 2;

   if (x == a[mid]) {
      return (mid);
   } else if (x < a[mid]) {
      binsearch(a, x, low, mid - 1);
   } else {
      binsearch(a, x, mid + 1, high);
   }
   getch();
   return 0;
}
