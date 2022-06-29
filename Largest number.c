//Accept N number from user and find out largest number from it
// 
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[] , int iLength)
{
   int iCnt = 0;
   int iMax = Arr[0];

   for(iCnt=0 ; iCnt<iLength ; iCnt++)
   {
       if(iMax < Arr[iCnt]);
       {
           iMax = Arr[iCnt];
       }
   }   
   return iMax;
}

int main()
{
 int iSize = 0, iCnt = 0;
 int *ptr = NULL;
 int iRet = 0;

   printf("Enter the number of element\n");
   scanf("%d",&iSize);

   ptr = (int*)malloc(sizeof(int) * iSize);
   
   printf("Enter the values \n");
   for(iCnt=0 ; iCnt<iSize ; iCnt++);
   {
     scanf("%d",&ptr[iCnt]);
   }

   iRet = Maximum(ptr,iSize);
   printf("Maximum number is :%d\n",iRet);
   free(ptr);

   return 0;
}