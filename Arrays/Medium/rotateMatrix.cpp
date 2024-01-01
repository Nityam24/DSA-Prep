

/**
 * @brief This class provides a solution to rotate a given matrix by 90 degrees clockwise.
 */
class Solution {
public:
    /**
     * @brief Rotates the given matrix by 90 degrees clockwise.
     * 
     * @param matrix The matrix to be rotated.
     */
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        
        // Transpose the matrix
        for(int i=0;i<row; i++){
            for(int j=0; j<=i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // Reverse each row of the matrix
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};