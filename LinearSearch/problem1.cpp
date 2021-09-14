//Given an array of integers return how many of them contain an even number of digits

#include <iostream>

using namespace std;

int count_digits(int num)
{
   if(num ==0)
      return 1;
   if(num<0)
   num = num* -1;
   int count =0;
   while(num>0)
   {
       count++;
       num = num/10;
   }

   return count;
}

int main()
{
   int arr[]{10,113,1567,23789};
   int size = sizeof(arr)/sizeof(arr[0]);
   int count = 0;

   for(int i=0; i<size;i++)
   {
       if(count_digits(arr[i]) % 2 == 0 )
       {
           count++;
       }
   }

   cout<<"Integer having even number of digits is : "<<count<<endl;

   return 0;
}