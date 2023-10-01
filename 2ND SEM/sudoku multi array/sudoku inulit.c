#include <stdio.h>
#include <stdbool.h>

#define max_value 9
#define size 3

int row, column, number;//inputs of the user
int i, j;//used for looping
int row_pos, column_pos;

// printing of the sudoku table
void sudoku_table(int table[size][size]) {

  printf("\n\tSUDOKU TABLE");

  for (row = 0; row < size; row++) {
    printf("\n---------------------\n");
      for (column = 0; column < size; column++) {
        printf("%s  %d  %s ", column < size ? "|" : "", table[row][column], column == 2 ? "|" : "");
        }
    }

  {
  printf("\n---------------------\n");
  }

}

int input_values(int table[size][size]) {

  printf("\n\nEnter the values for the Sudoku problem (row, column, number):\n");

  for (i = 0; i < size; i++) {
    printf("\nInput #%d", i + 1);
    printf("\nRow \t(1-3): ");
    scanf("%d", &row);

      // check if the user entered valid row numbers
      if (row < 1 || row > size) {
        printf("\nInvalid row number. Please enter row numbers 1-3 only.\n");
        i--;
        continue;
      }

    printf("Column\t(1-3): ");
    scanf("%d", &column);

      // check if the user entered valid column numbers
      if (column < 1 || column > size) {
        printf("\nInvalid column number. Please enter column numbers 1-3 only.\n");
        i--;
        continue;
      }

      // check if the cell is occupied
      if (table[row - 1][column - 1] != 0) {
        printf("\nThis cell is already occupied. Please try again.\n");
        i--;
        continue;
      }

    printf("Number\t(1-9): ");
    scanf("%d", &number);

      // check if the user entered valid numbers
      if (number < 1 || number > max_value) {
        printf("\nInvalid number. Please only enter numbers from 1 to 9.\n");
      i--;
      continue;
      }
    table[row - 1][column - 1] = number;
    }
}

// check if a number can be placed in the given row and column
int input_placement(int table[size][size], int row, int column, int number) {

  // check if the number already exists in the row
  for (i = 0; i < size; i++) {
    if (table[row][i] == number) {
      return false;
    }
  }

  // check if the number already exists in the column
  for (i = 0; i < size; i++) {
    if (table[i][column] == number) {
      return false;
    }
  }

  // check if the number already exists in the 3x3 sudoku table
  row_pos = row - (row % size);
  column_pos = column - (column % size);

  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      if (table[row_pos + i][column_pos + j] == number) {
        return false;
      }
    }
  }

return true;
}

// solving the sudoku problem using backtracking or tracing
int solve_sudoku(int table[size][size]) {

  // checking the empty cells
  bool empty_cell = false;
    for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++) {
        if (table[row][column] == 0) {
          empty_cell = true;
          break;
        }
      }
    if (empty_cell) {
    break;
    }
  }

  // if no empty cell is found, the sudoku is solved
  if (!empty_cell) {
    return true;
  }

  // trying numbers from 1 to 9
  for (int number = 1; number <= max_value; number++) {
    if (input_placement(table, row, column, number)) {
      table[row][column] = number;
        if (solve_sudoku(table)) {
          return true;
        }
      table[row][column] = 0;  // reset a cell if there is no solution
    }
  }

    return false;
}

int validity_check(int table[size][size]) {

  int valid_sudoku = 1; // if sudoku is valid

  // checking all rows for repeated numbers
  for (row = 0; row < size; row++) {
      int track_num[max_value] = {0};
      for (column = 0; column < size; column++) {
        int number = table[row][column];
        if (number != 0 && track_num[number]) {
          valid_sudoku = 0; // sudoku is invalid
          break;
        }
        track_num[number] = 1; // number has been tracked
      }
    if (!valid_sudoku) {
    break;
    }
  }

  if (valid_sudoku) {
    // checking each cell in the 3x3 grid for repeated numbers
    for (row_pos = 0; row_pos < size; row_pos += size) {
      for (column_pos = 0; column_pos < size; column_pos += size) {
        int track_num[max_value + 1] = {0};
        for (row = 0; row < size; row++) {
            for (column = 0; column < size; column++) {
              int number = table[row_pos + row][column_pos + column];
              if (number != 0 && track_num[number]) {
                valid_sudoku = 0; // sudoku is invalid
                break;
              }
              track_num[number] = 1; // number has been tracked
            }
            if (!valid_sudoku) {
              break;
            }
        }
        if (!valid_sudoku) {
        break;
        }
      }
      if (!valid_sudoku) {
        break;
      }
    }
  }

    return valid_sudoku;
}

void reset_table(int table[size][size]) {
    for (row = 0; row < size; row++) {
        for (column = 0; column < size; column++) {
            table[row][column] = 0;
        }
    }
}

int main() {

  char play_again;
  char name[80];
  int table[size][size] = {0}; // initializing the sudoku table with all zeros

  printf("\n\t\t\tWelcome to SUDOKU Solver!");
  printf("\n\nPlayer's name: ");
  scanf("%s", name);

  printf("\nHello, %s! Refer to the guide below.", name);
  printf("\n\n\t COLUMN AND ROW PLACEMENT\n\t\t  NUMBER GUIDE\n");
  printf("\n\t\t   COLUMN");
  printf("\n\t\t  [1][2][3]");
  printf("\n\t R [1] -  -  - \n\t O [2] -  -  - \n\t W [3] -  -  - ");

  do {

    input_values(table);

    printf("\nYOUR GIVEN SUDOKU PROBLEM:\n");
    sudoku_table(table);//shows the sudoku table unsolved first

    if (validity_check(table)) {
      printf("\nThe given sudoku problem is valid. Here is the solution!\n");
    }
    else {
      printf("\nThe given sudoku is invalid because of the repeated numbers.\nHence, no correct solution exists for this given.\nIf you still want to see the table even if invalid, here it is.\n");
    }

    if (solve_sudoku(table)) {
        printf("\nCOMPLETED SUDOKU TABLE:\n");
        sudoku_table(table);
    }

    if (validity_check(table)) {
      printf("\nGiven sudoku is solved and totally valid!\n");
    }
    else {
      printf("\nTry again next time.\n");
    }

    printf("\n\nWould you like to try again with a new table?\nIf yes, enter [Y] or [y]. If no, press any key.\n");
    scanf("\n%c",&play_again);

    if (play_again=='Y'||play_again=='y') {
      reset_table(table);
    }

  } while (play_again == 'Y' || play_again == 'y');

  printf("\nThank you for using the program to solve Sudoku, %s!", name);

    return 0;
}
