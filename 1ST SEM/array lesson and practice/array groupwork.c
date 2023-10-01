#include <stdio.h>

int main() {
  char option, repeat;
  char sure[80];
  char name[80];
  int select;
  int X[5] = {0, 0, 0, 0, 0};
  int i;
  int Ecount; // for count of element
  int size;

  printf("\t\tWELCOME TO GROUP 5's PROGRAM\n");

  printf("\nEnter your name: ");
  gets(name);
  printf("\n===============================================================\n");
  printf("\nHello, %s! This is BSIT 1-4 Group 5's Array Program.\n", name);

  do {
    printf("\nHow many data will you input? (min. 2 - max. 3): ");
    scanf("%d", &Ecount);
    if (Ecount != 2 && Ecount != 3) {
      printf("\nINVALID INPUT! PLEASE TRY AGAIN.\n");
    }
  } while (Ecount != 2 && Ecount != 3);

  for (int i = 0; i < Ecount; i++) {
    printf("\nEnter a number for element %d: ", i + 1);
    scanf("%d", &X[i]);
  }
  printf("\n\n\t\tThe current array is: { %d, %d, %d, %d, %d }\n", X[0], X[1],
         X[2], X[3], X[4]);
  if (Ecount == 2)
    size = 2;
  if (Ecount == 3)
    size = 3;

  do {
    printf("\n\n==============================================================="
           "\n");
    printf("\n\t\tPlease select your desired operation:\n");
    printf("\n\t\t\t <1> SEARCHING      <4> SORTING");
    printf("\n\t\t\t <2> INSERTION      <5> EXIT");
    printf("\n\t\t\t <3> DELETION");

    printf("\n\n==============================================================="
           "\n");
    printf("\n\t\tYour selected operation = ");
    scanf("%d", &select);

    switch (select) {
    case 1: {
      printf("\n\n============================================================="
             "==\n");
      printf("\n\t\tYou have selected <SEARCHING>");
      {
        printf("\n\n\t\tEnter the value you want to search for: ");
        int searchValue;
        scanf("%d", &searchValue);
        int foundIndex = -1;
        for (i = 0; i <= 5; i++) {
          if (X[i] == searchValue) {
            foundIndex = i;
            break;
          }
        }
        if (foundIndex == -1 || searchValue == 0 ) {
          printf("\n\t\tValue is not found in the array.");
        } else if (foundIndex == 0) {
          printf("\n\t\tValue %d is found at %dst element, index %d or X[%d].",
                 searchValue, foundIndex + 1, foundIndex, foundIndex);
        } else if (foundIndex == 1) {
          printf("\n\t\tValue %d is found at %dnd element, index %d or X[%d].",
                 searchValue, foundIndex + 1, foundIndex, foundIndex);
        } else if (foundIndex == 2) {
          printf("\n\t\tValue %d is found at %drd element, index %d or X[%d].",
                 searchValue, foundIndex + 1, foundIndex, foundIndex);
        } else {
          printf("\n\t\tValue %d is found at %dth element, index %d or X[%d].",
                 searchValue, foundIndex + 1, foundIndex, foundIndex);
        }
        break;
      }
    }
    case 2: {
      printf("\n\n============================================================="
             "==\n");
      printf("\n\t\tYou have selected <INSERTION>\n");
      int selectedindex;
  	    printf("\n\t\tArray before insertion:\n\t\t{ ");
  	    for (i = 0; i < 5; i++)
  	      {
  		  printf("%d, ", X[i]);
  	      }
        printf("}");
  	     do{
  	    printf("\n\n\t\tPlease select an index value [0-4]: ");
  	    scanf("%d", &selectedindex);
  	        if  (selectedindex <0 || selectedindex >4)
  	            printf("\n\t\tIndex is out of range, please try again");
  	    }while (selectedindex <0 || selectedindex >4);
  	    printf("\n\t\tEnter the value you want to insert: ");
  	    int insertValue;
  	    scanf("%d", &insertValue);
  	     int iszero;
  	    int temp[5];
  	        for(i=selectedindex; i<5; i++){
  	            if (X[i] == 0)
  	                temp[i] = X[i];
                else
                  temp[i] = 0;
  	        }

  	        for(i=selectedindex; i<5; i++){
  	            if (temp[i] != 0)
  	                X[i+1] = temp[i];
  	        }
  	    X[selectedindex] = insertValue;
  	    printf("\n\t\tArray after insertion:\n\t\t{ ");
  	    for (i = 0; i < 5; i++)
  	      {
  		  printf("%d, ", X[i]);
  	      }
      printf("}");
      /*
      size++;
  	      if (size > 5 )
                  printf("\n\n\t\tArray is full. Cannot insert any more elements. \n\t\tPlease enter one value to delete. \n");

        else
    */
            break;
    }


    case 3: {
      printf("\n\n============================================================="
             "==\n");
      printf("\n\t\tYou have selected <DELETION>");
      printf("\n\n\t\tEnter the value you want to delete: ");
      int deleteValue;
      scanf("%d", &deleteValue);
      int foundIndex = -1;
      for (i = 0; i <= 5; i++) {
        if (X[i] == deleteValue) {
          foundIndex = i;
          break;
        }
      }
      if (foundIndex == -1 || deleteValue == 0) {
        printf("\t\tValue not found in the array.");
      } else {
        X[i] = 0;
        /*for (i = foundIndex; i <= 5 - 1; i++) {
          X[i] = X[i + 1];
        }*/
        size--;
        printf("\n\t\tArray after deletion:\n\t\t{ ");
        for (i = 0; i < 5; i++) {
          printf("%d, ", X[i]);
        }
        printf("}");
      }
      break;
    }
    case 4: {
      int order;
      printf("\n\n============================================================="
             "==\n");
      printf("\n\t\tYou have selected <SORTING>");
      do {
        printf("\n\nPress <1> for Ascending order or Press <2> for Descending "
               "order: ");
        scanf("%d", &order);
        int temp;
        for (i = 0; i < 5-1; i++) {
          for (int j = i + 1; j < 5-1; j++) {
            if (X[j] < X[i]) {
              temp = X[i];
              X[i] = X[j];
              X[j] = temp;
            }
          }
        }
      } while (order != 1 && order != 2);

      if (order == 1) {
        printf("\n\t\tArray after sorting in ascending order:\n\t\t{ ");
        for (i = 1; i <= 5-1; i++) {
          if(X[i] !=0)
            printf("%d, ", X[i]);
        }
        printf("}");
      } else if (order == 2) {
        printf("\n\t\tArray after sorting in descending order:\n\t\t{ ");
        for (i = 5 - 1; i > 0; i--) {
          if(X[i] !=0)
            printf("%d, ", X[i]);
        }
        printf("}");
      }
      break;
    }
    case 5: {
      do {
        printf("\n\t\tYou have selected <EXIT> Are you sure?\n\t\tPress Y if "
               "yes, Press N if no: ");
        scanf("%s", sure);

        if (sure[0] == 'Y' || sure[0] == 'y') {
          printf("\n\n========================================================="
                 "======\n");
          printf("\n\t\tThank you for using this program.\n");
          printf("\n\t\tExiting the program...\n");
          return 0;
        } else if (sure[0] == 'N' || sure[0] == 'n') {
          break;
        } else
          printf("\n\n\t\tINVALID INPUT! PLEASE TRY AGAIN.\n");
      } while (sure[0] != 'Y' && sure[0] != 'y' && sure[0] != 'N' &&
               sure[0] != 'n');
      break;
    }
    default: {
      printf("\n\t\tInvalid option selected. Please try again.");
      break;
    }
    }

    printf("\n\nTo select another operation, press Y. If you wish to exit, "
           "press N:\t");
    scanf("\n%c", &repeat);

  } while (repeat == 'Y' || repeat == 'y');

       printf("\n\n===============================================================\n");
       printf("\n\t\tThank you for using this program.\n");
       printf("\n\t\tExiting the program...\n");

  return 0;
}
