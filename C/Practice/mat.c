#include <stdio.h>
int determinant(int mat[4][4], int size);
void minor(int mat[4][4], int minor_mat[4][4], int row, int col, int size);
int cofactor(int mat[4][4], int row, int col, int size);

int main() {
    int size, i, j, row, col;
    // [geting size of the Matrix from user]
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    // [ensuring the size of the Matrix]
    if (size > 4) {
        printf("Size should be at most 4 for this program.\n");
        return 1;
    }
    int matrix[4][4];
    // [Input elements of the matrix from the user]
    printf("Enter the elements of the matrix 'ROW-wise': \n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // [Ask out the user for the position]
    printf("Enter the row index of the element for which to calculate the cofactor:");
    scanf("%d", &row);
    printf("Enter the column index of the element for which to calculate the cofactor: ");
    scanf("%d",&col);
    // [Convert 1-index to 0-index]
    row -= 1;
    col -= 1;
    // [Check if the position is valid or not]
    if (row < 0 || row >= size || col < 0 || col >= size) {
        printf("[You've entered Invalid Position]\n");
        return 1;
    }
    // [Calculating the minor and cofactor of the Matrix]
    int minor_matrix[4][4];
    minor(matrix, minor_matrix, row, col, size);
    int minor_value = determinant(minor_matrix, size - 1);
    int cof = cofactor(matrix, row, col, size);
    // [Display the minor (as determinant) and cofactor]
    printf("The minor of the element in position [%d,%d] is: %d\n", row + 1, col + 1, minor_value);
    printf("The cofactor of the element in position [%d,%d] is: %d\n", row + 1, col + 1, cof);
    return 0;
}
// [Function for calculating the determinant of a submatrix]
int determinant(int mat[4][4], int size) {
    if (size == 1)
        return mat[0][0];
    
    int det = 0, sign = 1, submatrix[4][4];
    
    for (int k = 0; k < size; k++) {
        int subi = 0; // [submatrix row index]
        
        for (int i = 1; i < size; i++) {
            int subj = 0; // [submatrix column index]
            
            for (int j = 0; j < size; j++) {
                if (j == k) continue;
                submatrix[subi][subj] = mat[i][j];
                subj++;
            }
            subi++;
        }
        det += sign * mat[0][k] * determinant(submatrix, size - 1);
        sign = -sign;
    }  
    return det;
}

// [Function for minor] 
void minor(int mat[4][4], int minor_mat[4][4], int row, int col, int size) {
    int subi = 0, subj = 0;
    for (int i = 0; i < size; i++) {
        if (i == row) continue;
        subj = 0;
        for (int j = 0; j < size; j++) {
            if (j == col) continue;
            minor_mat[subi][subj] = mat[i][j];
            subj++;
        }
        subi++;
    }
}
// [Function for cofactor] 
int cofactor(int mat[4][4], int row, int col, int size) {
    int minor_mat[4][4];
    minor(mat, minor_mat, row, col, size);
    int sign = ((row + col) % 2 == 0) ? 1 : -1;
    return sign * determinant(minor_mat, size - 1);
}