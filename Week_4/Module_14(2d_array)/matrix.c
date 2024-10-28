/*
Here's a quick overview of square, diagonal, and scalar matrices:
// Square Matrix: A matrix with the same number of rows and columns. 
// Example: A 3x3 or 4x4 matrix. All square matrices have a square shape.

// Diagonal Matrix: A square matrix where all elements outside the main diagonal are zero.
// Only the diagonal elements (from the top left to the bottom right) can be non-zero.
// Example: A 3x3 matrix with elements like [a, 0, 0], [0, b, 0], [0, 0, c].

// Scalar Matrix: A specific type of diagonal matrix where all diagonal elements are the same.
// It has zeros outside the main diagonal, and all values along the main diagonal are equal.
// Example: A 3x3 matrix with elements like [k, 0, 0], [0, k, 0], [0, 0, k] where all k's are the same.

1. **Square Matrix**:
   - A matrix with the same number of rows and columns, \( n \times n \).
   - Example:
     \[
     \begin{bmatrix} 
     1 & 2 \\ 
     3 & 4 
     \end{bmatrix}
     \]

2. **Diagonal Matrix**:
   - A square matrix where all non-diagonal elements are zero.
   - Only elements on the main diagonal (from top-left to bottom-right) can be non-zero.
   - Example:
     \[
     \begin{bmatrix} 
     5 & 0 \\ 
     0 & 3 
     \end{bmatrix}
     \]

3. **Scalar Matrix**:
   - A diagonal matrix where all the diagonal elements are the same.
   - Special case of a diagonal matrix.
   - Example:
     \[
     \begin{bmatrix} 
     7 & 0 \\ 
     0 & 7 
     \end{bmatrix}
     \]

In summary:
- **Square**: \( n \times n \).
- **Diagonal**: Square matrix with zeros off the main diagonal.
- **Scalar**: Diagonal matrix with identical diagonal values.
*/