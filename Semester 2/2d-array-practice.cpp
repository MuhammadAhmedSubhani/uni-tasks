#include<iostream>
using namespace std;
int main() {
    //Let the user enter the number of rows and columns for a 2D array.
    //Allow the user to input values for every element of the array.
    //Print the 2D array in matrix form.
    //Calculate and display the sum of each row.
    // int v,b;
    // cout << "Enter no. of rows you want in array:" << endl ;
    // cin >> v;
    // cout << "Enter no. of columns you want in array:" << endl ;
    // cin >> b;
    // int arr[v][b];
    // cout << "Enter the values in the array:" ;
    // for(int i=0; i<v; i++ ){
    //     for(int j=0; j<b; j++){
    //         cin >> arr[i][j] ; 
    //     }
    // }
    // for(int i=0; i<v; i++ ){
    //     for(int j=0; j<b; j++){
    //         cout << arr[i][j] << " " ; 
    //     }
    // }
 //=========================================================================
 //Matrix Transpose
    // int v,b;
    // cout << "Enter no. of rows you want in array:" << endl ;
    // cin >> v;
    // cout << "Enter no. of columns you want in array:" << endl ;
    // cin >> b;
    // int arr[v][b];
    // cout << "Enter the values in the array:" ;
    // for(int i=0; i<v; i++ ){
    //     for(int j=0; j<b; j++){
    //         cin >> arr[i][j] ; 
    //     }
    // }
    //  cout << "The matrix is:" << endl;
    // for(int i=0; i<v; i++ ){
    //     for(int j=0; j<b; j++){
    //         cout << arr[i][j] << " " ; 
    //     }
    //     cout << endl;
    // }
    // cout << "The transpose of the matrix is:" << endl;
    // for(int i=0; i<b; i++ ){
    //     for(int j=0; j<v; j++){
    //         cout << arr[j][i] << " " ; 
    //     }
    //     cout << endl;
    // }
 //=========================================================================
 // Matrix Addition
//    int v,b;
//     cout << "Enter no. of rows you want in Matix A:" << endl ;
//     cin >> v;
//     cout << "Enter no. of columns you want in Matix A:" << endl ;
//     cin >> b;
//     int arr[v][b];
//     cout << "Enter the values in the Matix A:" ;
//     for(int i=0; i<v; i++ ){
//         for(int j=0; j<b; j++){
//             cin >> arr[i][j] ; 
//         }
//     }

//    int a,s;
//     cout << "Enter no. of rows you want in Matix B:" << endl ;
//     cin >> a;
//     cout << "Enter no. of columns you want in Matix B:" << endl ;
//     cin >> s;
//     int arr2[a][s];
//     cout << "Enter the values in the Matix B:" ;
//     for(int i=0; i<a; i++ ){
//         for(int j=0; j<s; j++){
//             cin >> arr2[i][j] ; 
//         }
//     }
//      cout << "The matrix A is:" << endl;
//     for(int i=0; i<v; i++ ){
//         for(int j=0; j<b; j++){
//             cout << arr[i][j] << " " ; 
//         }
//         cout << endl;
//     }
//      cout << "The matrix B is:" << endl;
//     for(int i=0; i<a; i++ ){
//         for(int j=0; j<s; j++){
//             cout << arr2[i][j] << " " ; 
//         }
//         cout << endl;
//     }
//     if(v != a || b != s){
//         cout << " Addition ain't possible because rowas and common aren't same." ;
//     }
//     else{
//         for(int i=0; i<v; i++ ){
//             for(int j=0; j<b; j++){
//                 cout << arr[i][j] + arr2[i][j] << " " ; 
//             }
//             cout << endl;
//         }
//     }
//======================================================================
//Largest Element in Each Row
// int v=2,s=2;
// int arr[v][s];
//     cout <<" Rnter no. in Matrix:" << endl;
//     for(int i=0;i<v; i++){
//         for(int j=0;j<s; j++){
//             cin >> arr[i][j];
//         }
//     }
//     cout << "The matrix is:" << endl;
//     for(int i=0;i<s; i++){
//         for(int j=0;j<v; j++){
//             cout << arr[i][j];
//         }
//     }
//     for(int i=0; i<v; i++) {
//         int maxx = arr[i][0];
//         for(int j=1;j<s;j++)
//             if(arr[i][j] > maxx) maxx = arr[i][j];
//         cout << "Largest in row " << i+1 << ": "<< maxx << endl;
//     }
//======================================================================
//Search for an Element
    // int r,c,x;
    // cout << "Rows: "; cin >> r;
    // cout << "Columns: "; cin >> c;
    // int arr[r][c];
    // cout << "Enter matrix:\n";
    // for(int i=0;i<r;i++)
    //     for(int j=0;j<c;j++)
    //         cin >> arr[i][j];
    // cout <<" Matrix is:\n";
    // for(int i=0;i<r;i++) {
    //     for(int j=0;j<c;j++)
    //         cout << arr[i][j] << " ";
    //     cout << "\n";
    // }
    // cout << "Enter search element: "; cin >> x;
    // for(int i=0;i<r;i++)
    //     for(int j=0;j<c;j++)
    //         if(arr[i][j]==x)
    //             cout << "Found at ("<<i<<","<<j<<")\n";
    // return 0;
//========================================================================
// Diagonal Elements (square matrix only)
    // int n;
    // cout << "Size (n x n): "; cin >> n;
    // int arr[n][n];
    // cout << "Enter matrix:\n";
    // for(int i=0;i<n;i++)
    //     for(int j=0;j<n;j++)
    //         cin >> arr[i][j];
    // cout << "Diagonal elements: ";
    // for(int i=0;i<n;i++)
    //     cout << arr[i][i] << " ";
    // cout << endl;
//========================================================================
}