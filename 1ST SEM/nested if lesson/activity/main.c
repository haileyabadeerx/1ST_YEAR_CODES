#include <stdio.h>

int main(int argc, const char * argv[])
{
   int recommendee;
   int height;
   int age;
   int citizenship;
   char name[80];

   printf("Kindly input your name, Applicant: \n");
   scanf("%s", name);
   printf("\nWelcome to Jedi Knight Academy, Applicant %s!\n\n", name );

    printf("Are you a recommendee of Jedi Master Obi Wan Kenobi? If yes, input 1. If not, input 0.\n");
    scanf("%d",&recommendee);
    if(recommendee==1)
        printf("\nCongratulations, %s! You just got accepted into the Jedi Knight Academy!\n", name);
    else if(recommendee==0)
        {printf("What is your height in cm?\t");
         scanf("%d",&height);
         {if (height>=200)
            {printf("What is your age?\t\t");
            scanf("%d",&age);
            {if (age>=21&&age<=25)
                {printf("Are you a citizen of Planet Endor? If yes, input 1. If not, input 0.\n");
                scanf("%d",&citizenship);
                {if(citizenship==1)
                   printf("\nCongratulations, %s! You just got accepted into the Jedi Knight Academy!\n", name);
                 else printf("\nApologies. You are ineligible due to lack of citizenship.\n");}
                 }
             else printf("\nApologies. You are ineligible due to age requirement.\n");}
            }
         else printf("\nApologies. You are ineligible due to height requirement.\n");}
        }
else printf("Invalid input. Try again.\n");

printf("Thank you. Have a nice day!\n");

   return 0;
}


