

/**
 * @brief This code implements the "setZeroes" function, which sets the entire row and column to zero if any element in the matrix is zero.
 * 
 * The algorithm works in three steps:
 * 1. Traverse the matrix and mark the first row and column accordingly.
 * 2. Mark the elements with zero from (1,1) to (n-1, m-1) based on the marked first row and column.
 * 3. Finally, mark the first column and then the first row if necessary.
 * 
 * @param matrix The input matrix to be modified.
 */
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {

//     // int row[n] = {0}; --> matrix[..][0]
//     // int col[m] = {0}; --> matrix[0][..]
//     int n = matrix.size();
//     int m = matrix[0].size();  

//     int col0 = 1;
//     // step 1: Traverse the matrix and
//     // mark 1st row & col accordingly:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 // mark i-th row:
//                 matrix[i][0] = 0;

//                 // mark j-th column:
//                 if (j != 0)
//                     matrix[0][j] = 0;
//                 else
//                     col0 = 0;
//             }
//         }
//     }

//     // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
//     for (int i = 1; i < n; i++) {
//         for (int j = 1; j < m; j++) {
//             if (matrix[i][j] != 0) {
//                 // check for col & row:
//                 if (matrix[i][0] == 0 || matrix[0][j] == 0) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }

//     //step 3: Finally mark the 1st col & then 1st row:
//     if (matrix[0][0] == 0) {
//         for (int j = 0; j < m; j++) {
//             matrix[0][j] = 0;
//         }
//     }
//     if (col0 == 0) {
//         for (int i = 0; i < n; i++) {
//             matrix[i][0] = 0;
//         }
//     }

   
// }
// };

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

       int n=matrix.size();
        int m=matrix[0].size();
        bool f1=false,f2=false;
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                f1=true;
               // break;
                
            }

        }
        for(int j=0;j<m;j++){
            if(matrix[0][j]==0){
                f2=true;
               // break;
                
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
              if(matrix[i][j]==0){
                  matrix[i][0]=matrix[0][j]=0;
              }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
        if(f1==true){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
        if(f2==true){
            for(int j=0;j<m;j++){
                matrix[0][j]=0;
            }
        }
    }
};  