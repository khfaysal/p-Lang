#include <stdio.h>
int determinant(int mat[10][10], int size);

void minor(int mat[10][10], int minor_mat[10][10], int row, int col, int size);

int cofactor(int mat[10][10], int row, int col, int size);

int main() {
    int size, i, j, row, col;
    // Get the size of the matrix from the user
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    // Ensure size does not exceed 10 (for simplicity)
    if (size > 10) {
        printf("Size should be at most 10 for this program.\n");
        return 1;
    }
    int matrix[10][10];
    // Input elements of the matrix from the user
    printf("Enter the elements of the matrix (row wise): \n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Ask user for the position 
    printf("Enter the row index of the element for which you want to calculate the cofactor:");
    scanf("%d", &row);
    printf("Enter the column index of the element for which you want to calculate the cofactor: "); //
    scanf("%d",&col);
    // Convert 1-indexed to 0-indexed
    row -= 1;
    col -= 1;
    // Check if the position is valid
    if (row < 0 || row >= size || col < 0 || col >= size) {
        printf("Invalid position.\n");
        return 1;
    }
    // Calculate the minor and cofactor
    int minor_matrix[10][10];
    minor(matrix, minor_matrix, row, col, size);
    int minor_value = determinant(minor_matrix, size - 1);
    int cof = cofactor(matrix, row, col, size);
    // Display the minor (as determinant) and cofactor
    printf("The minor of the element in position [%d,%d] is: %d\n", row + 1, col + 1, minor_value);
    printf("The cofactor of the element in position [%d,%d] is: %d\n", row + 1, col + 1, cof);
    return 0;
}
// Function to calculate the determinant of a submatrix
int determinant(int mat[10][10], int size) {
    if (size == 1)
        return mat[0][0];
    
    int det = 0, sign = 1, submatrix[10][10];
    
    for (int k = 0; k < size; k++) {
        int subi = 0; // submatrix row index
        
        for (int i = 1; i < size; i++) {
            int subj = 0; // submatrix column index
            
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
// Function forr minor 
void minor(int mat[10][10], int minor_mat[10][10], int row, int col, int size) {
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
// Function for cofactor 
int cofactor(int mat[10][10], int row, int col, int size) {
    int minor_mat[10][10];
    minor(mat, minor_mat, row, col, size);
    int sign = ((row + col) % 2 == 0) ? 1 : -1;
    return sign * determinant(minor_mat, size - 1);
}

