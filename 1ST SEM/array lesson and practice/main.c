#include <stdio.h>
#include <stdlib.h>

int main()
{
	int searchElement, insertElement, deleteValue, temp, arrayLength, ascendDescend, elementDelete;
	int searchCount, deleteCount, sortCount;
	int menuChoice, insertChoice;
	int X[5] = {-1, -1, -1, -1, -1};
	char userDecision, insertDecision, deleteDecision; //ONE imaan


	do{
		printf("ENTER THE NUMBER OF VALUES IN THE ARRAY [MIN - 2 | MAX - 3]: "); // ENTER THE NUMBER OF VALUES IN THE ARRAY [MIN - 2 | MAX - 3]:
		scanf("%d", &arrayLength);

		if (arrayLength < 2 || arrayLength > 3){

			printf("LENGTH %d IS AN INVALID INPUT!\n", arrayLength);
		}
		printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
	}
	while (arrayLength < 2 || arrayLength > 3); //TWO elli


	for (int i = 0; i < arrayLength; i++){
		printf("ENTER AN INTEGER FOR ELEMENT %d: ",i + 1);
		scanf("%d", &X[i]);
	}

	menu:
	do{
		printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
		// Display the main menu options for the user
		printf("[1] SEARCHING\n[2] INSERTION\n[3] DELETION\n[4] SORTING\n[5] EXIT");
		printf("\nENTER 1 - 5 TO PROCEED: ");
		scanf("%d", &menuChoice);

				if (menuChoice > 5 || menuChoice < 1)
			printf("MENU %d IS AN INVALID INPUT! TRY AGAIN.\n", menuChoice); //MENU %d IS AN INVALID INPUT! PLEASE, TRY AGAIN.
	}
	while (menuChoice > 5 || menuChoice < 1); //THREE nhil

		choice:
	switch(menuChoice){
		case 1:{ //SEARCHING
			printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
			searchCount = 0;
			printf("ENTER THE VALUE YOU WANT TO SEARCH: ");
			scanf("%d", &searchElement);
			// Loop through the array to search for the given element
			for (int i = 0; i < 5; i++){
				if (searchElement == X[i]){
					printf("%d IS X[%d] OR %s ELEMENT.\n", searchElement, i, (i == 0 ? "FIRST" : i == 1 ? "SECOND" : i == 2 ? "THIRD" : i == 3 ? "FOURTH" : "FIFTH"));
					searchCount++;
					break;
				}
			}
		if (searchCount == 0)
				printf("%d IS NOT PRESENT IN THE ARRAY!\n", searchElement);
			goto prompt;
			break;
		} //FOUR jiro
		case 2: { //INSERTION
			insertChoice = 0;

			printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");

			// Display the elements of the array before insertion
			printf("Here are the elements in the array X[5] = {");
			for (int i = 0; i < 5; i++)
				printf("%d%s", (X[i]==-1)? 0 : X[i], (i == 4) ? "" : ", ");
			printf("}");

			printf("\n\nENTER THE VALUE YOU WANT TO INSERT: ");
			scanf("%d", &insertElement);


			do {
				printf("\nENTER THE POSITION OF THE ELEMENT(1 - 5): ");
				scanf("%d", &insertChoice);

				if (insertChoice > 5 || insertChoice < 1)
					printf("ELEMENT %d IS AN INVALID INPUT! TRY AGAIN.\n", insertChoice);

				printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
			}
			while (insertChoice > 5); //FIVE mc


			if (X[insertChoice - 1] != -1){
				printf("\nELEMENT %d HAS A VALUE OF %d\nENTER [C] TO CONTINUE: ", insertChoice, X[insertChoice - 1]);
				scanf(" %c", &insertDecision);

				if (insertDecision == 'C' || insertDecision == 'c'){
					X[insertChoice - 1] = insertElement;
					printf("\nTHE VALUE OF %d HAS BEEN INSERTED IN ELEMENT %d.\n",insertElement, insertChoice);
				}
				else
					printf("\nTHE INSERTION PROCESS HAS BEEN TERMINATED!\n");
			}
			else{
				X[insertChoice - 1] = insertElement;
				printf("\nTHE VALUE OF %d HAS BEEN INSERTED IN ELEMENT %d.\n", insertElement, insertChoice);
			}
			goto prompt;
				 //SIX cy
			break;
		}
		case 3: {//DELETION
			do{
				printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");


				printf("Here are the elements in the array X[5] = {");
				for (int i = 0; i < 5; i++)
					printf("%d%s", (X[i]==-1)? 0 : X[i], (i == 4) ? "" : ", ");
				printf("}");
				deleteCount = 0;
				printf("\n\nENTER THE VALUE YOU WANT TO DELETE: ");


				int input_check = scanf("%d", &deleteValue); // scanf("%d", &deleteValue);
				if (input_check != 1) {
					printf("Invalid input. Please enter a number.\n");
										// D					while ((getchar()) != '\n');
					continue;
				}

				for (elementDelete = 0; elementDelete < 5; elementDelete++){
					if (deleteValue == X[elementDelete]){
						deleteCount++;
						break;
					}
				}if (deleteCount == 0)
					printf("VALUE %d IS NOT PRESENT IN THE ARRAY!\n", deleteValue);

						}while (deleteCount == 0); //SEVEN kyle

						printf("\nENTER [C] TO DELETE ELEMENT %d WITH VALUE OF %d: ", elementDelete + 1, deleteValue);
			scanf(" %c", &deleteDecision);
			if (deleteDecision == 'C' || deleteDecision == 'c'){
				X[elementDelete] = -1;
				printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
				printf("\nELEMENT %d WITH VALUE OF %d HAS BEEN DELETED.\n", elementDelete + 1, deleteValue); //\nELEMENT %d WITH THE VALUE OF %d HAS BEEN DELETED.\n
			}
			else{
				printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
				printf("\nTHE DELETION PROCESS HAS BEEN TERMINATED!\n");
			}
			goto prompt;
			break; //EIGHT kenzo
		}
		case 4:{//SORTING

			sortCount = 0;
			for (int i = 0; i < 5; i++)
				if (X[i] != -1)
					sortCount++;


			if (sortCount <= 1){
				printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
				printf("THE ARRAY CANNOT BE SORTED BECAUSE IT ONLY CONTAINS %d ELEMENT.", sortCount);
			}
			else{
				ascendDescend = 0;
				do{ 					printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
					printf("ENTER [1] FOR ASCENDING OR [2] FOR DESCENDING: ");
					scanf("%d", &ascendDescend);

					if (ascendDescend != 1 && ascendDescend != 2)
						printf("INVALID INPUT!\n");

				}				while (ascendDescend != 1 && ascendDescend != 2);

								for (int i = 0; i < 5 - 1; i++){
					for (int j = 0; j < 5 - i - 1; j++){
						if (X[j] != -1 && X[j + 1] != -1){
							if ((ascendDescend == 1 && X[j] > X[j + 1]) || (ascendDescend == 2 && X[j] < X[j + 1])) {
							temp = X[j];
							X[j] = X[j + 1];
							X[j + 1] = temp;}
						}
					}
				}
				//NINE brian

				printf("\nTHE SORTED ARRAY FOR %s IS: ", (ascendDescend == 1 ? "ASCENDING" : "DESCENDING"));
				for (int i = 0; i < 5; i++)
					if (X[i] != -1)
						printf("%d ", X[i]);
				printf("\n");

				goto prompt;
				//TEN xian
				break;
			}
		}
		case 5:{} //EXIT    //ELEVEN eizhel
	}
 while (menuChoice != 5){
prompt:
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
    printf ("\nDO YOU WANT TO CONTINUE?\n");
    printf ("\t[\'Y\'] Yes\n\t[\'M\'] Go Back to Menu\n");
    printf ("ENTER LETTER OF CHOICE: ");
    scanf(" %c", &userDecision);
	  if (userDecision == 'Y'||userDecision =='y' )
        goto choice;
    else if(userDecision == 'M' || userDecision == 'm')
        goto menu;
    else
        printf ("INVALID INPUT! TRY AGAIN\n"); // INVALID INPUT! PLEASE, TRY AGAIN!
}
printf ("\nTHANK YOU FOR USING OUR PROGRAM! ");
	return 0;
}


