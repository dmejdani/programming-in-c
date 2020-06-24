#include <stdio.h>
#include <stdlib.h>


int main()
{
   int num;
   FILE *fptr;
   
   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("codes.txt","r");
   
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   // first run
   while (fscanf(fptr,"%d", &num) == 1)
   {
      printf("Value of n=%d\n", num);
   }

   // second run - should not work
   while (fscanf(fptr,"%d", &num) == 1)
   {
      printf("Value of n=%d\n", num);
   }

   if (fseek(fptr, 0L, SEEK_SET) != 0)
   {
      printf("Going to the beginning of the file not successful!\n");
      exit(1);
   }

   // third run - should work
   while (fscanf(fptr,"%d", &num) == 1)
   {
      printf("Value of n=%d\n", num);
   }


   fclose(fptr); 
   return 0;
}