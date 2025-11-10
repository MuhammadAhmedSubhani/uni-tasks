#include <iostream>
using namespace std;

int main() {
//===========================================
//Sum of All Elements in an Array
//	int sum;
//    int arr[4] = {1,2,3,4,};
//    for(int i=0; i<4;i++)
//    sum += arr[i];
//    cout << sum << endl;
//===========================================
//Find the Largest Element
//    int arr[] = {12, 45, 23, 67, 34};
//    int n = 5;
//    int largest = arr[0];
//    for (int i = 1; i < n; i++) {
//        if (arr[i] > largest)
//            largest = arr[i];
//    }
//    cout << "Largest element = " << largest << endl;
//    return 0;
//===========================================
// Three Largest Elements in an Array
//    int arr[6] = {10, 4, 7, 20, 15, 30};
  // Sort in descending order
//    for (int i = 0; i < 6; i++) {
//        for (int j = i + 1; j < 6; j++) {
//            if (arr[i] < arr[j]) {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    cout << "Three largest elements are: ";
//    for (int i = 0; i < 3 && i < 6; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//===========================================
//Second Largest Element in an Array
int arr[5] = {5, 12, 9, 20, 14};
   int first = arr[0], second = -999999;
   for (int i = 1; i < 5; i++) {
       if (arr[i] > first) {
           second = first;
           first = arr[i];
       } else if (arr[i] > second && arr[i] != first) {
           second = arr[i];
       }
   }
   cout << "Second largest element = " << second << endl;
//===========================================


}