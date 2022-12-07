
#include <stdio.h>
int main()
{
   /*Variable Declaration, lets assume number = 25*/
   int number, temp, sum = 0, remainder;

   printf("Enter an integer\n");
   scanf("%d", &number);

    /*Condition Satsisfaction*/
   if(number >= 10 && number <=99999 ){

    /*Copying the value to a temporary variable, assigning number = 25 to temp */
    temp = number;

    /*if temp(number) not equal to zero, run this loop*/
    while (temp != 0)
    {
      remainder = temp % 10;  /* 25%10 -> assign to remainder(beduwama 2 yi, ithuru gana 5) -> remainder = 5,(go down after this) || 2nd time -> 2 % 10 -> remainder = 2 */
      sum       = sum + remainder; /* assign to sum = 0 + 5 -> sum = 5 || 2nd time -> assign to sum = 5 + 2 , sum = 7*/
      temp      = temp / 10;  /*  temp = 25/10 -> temp = 2 -> Now start again from line 20 || 2nd time -> assign to temp = 2 % 10 -> temp = 0 (NOW BREAK THE LOOP)  */
    }
    /* We can get the sum of digits by printing the sum */
    printf("Sum of digits of %d = %d\n", number, sum);
   }

   else{
     printf("Invalid input, please enter a correct number");
   }



   return 0;
}
