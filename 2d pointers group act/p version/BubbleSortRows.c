// Sorts each row of a 2D array using bubble sort in ascending or descending order

#define ROWS 3
#define COLS 3

void BubbleSortRows(double *p, int ifAscend) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS - 1; j++) {
            for (int k = 0; k < COLS - j - 1; k++) {

                double *current = (p + i * COLS + k);
                double *next = (p + i * COLS + k + 1);

                if (*(p + i * COLS + k) > *(p + i * COLS + k + 1) && ifAscend == 1 || *(p + i * COLS + k) < *(p + i * COLS + k + 1) && ifAscend == 2){
                    double temp = *(p + i * COLS + k);
                    *(p + i * COLS + k) = *(p + i * COLS + k + 1);
                    *(p + i * COLS + k + 1) = temp;
                }
            }
        }
    }
}
