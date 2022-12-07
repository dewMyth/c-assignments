#include <stdio.h>
int main()
{
   /*Variable Declaration, lets assume number = 25*/
   double priceNormalSeatsA = 15.00;
   double priceNormalSeatsB = 10.00;
   double priceNormalSeatsC = 5.00;

   double priceConcessionSeatsA = 10.00;
   double priceConcessionSeatsB = 5.00;
   double priceConcessionSeatsC = 3.00;

   int noOfFullTickets, noOfConcessionTickets, noBabyTickets;

   double priceOfFullTickets, priceOfConcessionTickets, priceOfBabyTickets;

   int choice;

   double total;

   int totalSeatsA = 30;
   int totalSeatsB = 60;
   int totalSeatsC = 90;

   int totalBoughtTickets;

   while(1){
   printf("\n============================");
   printf("\n1 - Class A \n2 - Class B\n3 - Class C\n4 - Current Availability\n5 - Exit");
   printf("\n============================");
   printf("\nEnter your option...\n");
   scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nHow many full tickets in A...");
            scanf("%d", &noOfFullTickets);
            printf("\nHow many concession tickets - Senior and Children under 12 and above 3...");
            scanf("%d", &noOfConcessionTickets);
            printf("\nHow many kids under 3 years ...");
            scanf("%d", &noBabyTickets);


            priceOfFullTickets = priceNormalSeatsA * noOfFullTickets;
            priceOfConcessionTickets = priceConcessionSeatsA * noOfConcessionTickets;
            priceOfBabyTickets = 0;

            totalBoughtTickets = noOfFullTickets + noOfConcessionTickets + noBabyTickets;

            if( totalSeatsA > totalBoughtTickets ) {
                totalSeatsA = totalSeatsA - totalBoughtTickets;
                total = (priceOfFullTickets + priceOfConcessionTickets + priceOfBabyTickets);
                printf("Your total ticket price is  = %.2lf", total);
            }
            else {
                printf("\nLess tickets available than required...", totalSeatsA);
                printf("\nTotal Available ...");
                printf("\nClass A is : %d", totalSeatsA);
                printf("\nClass B is: %d", totalSeatsB);
                printf("\nClass C is: %d", totalSeatsC);
            }

            break;

        case 2:
            printf("\nHow many full tickets in B ...");
            scanf("%d", &noOfFullTickets);
            printf("\nHow many concession tickets - Senior and Children under 12 and above 3...");
            scanf("%d", &noOfConcessionTickets);
            printf("\nHow many kids under 3 years ...");
            scanf("%d", &noBabyTickets);

            priceOfFullTickets = priceNormalSeatsB * noOfFullTickets;
            priceOfConcessionTickets = priceConcessionSeatsB * noOfConcessionTickets;
            priceOfBabyTickets = 0;

            totalBoughtTickets = noOfFullTickets + noOfConcessionTickets + noBabyTickets;

            if( totalSeatsB > totalBoughtTickets ) {
                totalSeatsB = totalSeatsB - totalBoughtTickets;
                total = (priceOfFullTickets + priceOfConcessionTickets + priceOfBabyTickets);
                printf("Your total ticket price is  = %.2lf", total);
            }
            else {
                printf("\nLess tickets available than required...", totalSeatsB);
                printf("\nTotal Available ...");
                printf("\nClass A is : %d", totalSeatsA);
                printf("\nClass B is: %d", totalSeatsB);
                printf("\nClass C is: %d", totalSeatsC);
            }

            break;

        case 3:
            printf("\nHow many full tickets ...");
            scanf("%d", &noOfFullTickets);
            printf("\nHow many concession tickets - Senior and Children under 12 and above 3...");
            scanf("%d", &noOfConcessionTickets);
            printf("\nHow many kids under 3 years ...");
            scanf("%d", &noBabyTickets);

            priceOfFullTickets = priceNormalSeatsC * noOfFullTickets;
            priceOfConcessionTickets = priceConcessionSeatsC * noOfConcessionTickets;
            priceOfBabyTickets = 0;

            totalBoughtTickets = noOfFullTickets + noOfConcessionTickets + noBabyTickets;

            if( totalSeatsC > totalBoughtTickets ) {
                totalSeatsC = totalSeatsC - totalBoughtTickets;
                total = (priceOfFullTickets + priceOfConcessionTickets + priceOfBabyTickets);
                printf("Your total ticket price is  = %.2lf", total);
            }
            else {
                printf("\nLess tickets available than required...", totalSeatsC);
                printf("\nTotal Available ...");
                printf("\nClass A is : %d", totalSeatsA);
                printf("\nClass B is: %d", totalSeatsB);
                printf("\nClass C is: %d", totalSeatsC);
            }

            break;

        case 4:
            printf("\nTotal Available ...");
            printf("\nClass A is : %d", totalSeatsA);
            printf("\nClass B is: %d", totalSeatsB);
            printf("\nClass C is: %d", totalSeatsC);
            break;

        case 5:
            printf("\nExiting...");
            printf("\nTotal Available ...");
            printf("\nClass A is : %d", totalSeatsA);
            printf("\nClass B is: %d", totalSeatsB);
            printf("\nClass C is: %d", totalSeatsC);
            return 1;


        default:
            printf("Please Select an option 1 - 5");
            break;
    }
  }
  return 0;
}
