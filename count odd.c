/*write a function to count odd numbers in an array*/
#include<stdio.h>
     
        int countOdd(int arr[],int n);


        int main()
        {
            int arr[] = {1,2,3,4,5};
            countOdd(arr,5);
            return 0;
        }


       

        int countOdd(int arr[], int n)
        {
            for(int i = 0; i<n ; i++)
            {
                if( i /2 != 0)
                {
                 printf("%d", arr[i]);
                 return 0;
                }
            }
        }

    
    
 
