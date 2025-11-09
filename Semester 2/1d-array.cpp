#include <iostream>
using namespace std;
//======================================
// count how many elements have at least one greater element in the array.
// int max_value(int arr[], int size){
//     int count = 0, element = 0;
//     for(int i=0; i < size; i++){
//         if(element < arr[i])
//         element = arr[i];
//     }
//     return element;
// }
// int main(){
//     int arr[]= {1,2,3,4,5,6,};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << max_value(arr, size);
// }
//======================================
// Student Marks Analyzer Total marks obtained by all students. Average marks. Highest and lowest marks.

// int marks(int arr[])
// {
//     int sum = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
// int avg(int arr[])
// {
//     int avg = marks(arr) / 10;
//     return avg;
// }
// int high(int arr[])
// {
//     // high
//     int high_count = 0, high = arr[0];
//     for(int i= 0; i < 10; i++){
//         if(high < arr[i]){
//             high = arr[i];
//         }
// }
//     return high;
// }
// int low(int arr[]){
//     // low
//     int low_count = 0, low = arr[0];
//     for(int i= 0; i < 10; i++){
//         if(low > arr[i]){
//             low = arr[i];
//         }
// }
//     return low;
// }
// int main()
// {
//     int arr[10];
//     cout << "enter marks of 10 students:";
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << marks(arr) << endl;
//     cout << avg(arr) << endl;
//     cout << high(arr) << endl;
//     cout << low(arr);
// }
//=============================================================
// Temperature Logger A city records its temperature for 7 days. Store them in an array and find: The hottest and coldest day’s temperature. The average weekly temperature. If the temperature was above 40°C on any day.
// int hott(int arr[], int size )
// {
//     int high = arr[0];
//     for(int i= 0; i < size; i++){
//         if(high < arr[i]){
//             high = arr[i];
//         }
// }
//     return high;
// }
// int cold(int arr[], int size){
//     int low = arr[0];
//     for(int i= 0; i < size; i++){
//         if(low > arr[i]){
//             low = arr[i];
//         }
// }
//     return low;
// }
// float avg(int arr[], int size)
// {
//     int sum = 0;
//     for(int i=0; i < size;  i++) 
//     {
//         sum += arr[i];
//     }
//     float avg = sum / size;
//     return avg;
// }
// int temp(int arr[], int size)
// {
//     int day = 0;
//     for(int i=0; i < size; i++){
//     if(arr[i] > 40){
//         day = arr[i];
//     }
// }
//     return day;
// }
// int main(){
//     int arr[] = {12, 21, 34, 45, 65, 50, 67};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << hott(arr, size) << endl ;
//     cout << cold(arr, size) << endl ;
//     cout << avg(arr, size) << endl ;
//     cout << temp(arr, size) << endl ;
// }
//=============================================================
//Store Inventory
//A store has prices of 8 products stored in an array. Write a program that:
//Finds the total worth of all products.
//Increases prices by 10% and displays the new prices.
//Finds how many items cost more than Rs.1000.

// float totalWorth(float price[], int size) {
//     float total = 0;
//     for (int i = 0; i < size; i++) {
//         total += price[i];
//     }
//     return total;
// }

// void increasePrices(float price[], int size) {
//     for (int i = 0; i < size; i++) {
//         price[i] += price[i] * 0.10; // 10% increase
//     }
// }

// int countExpensive(float price[], int size) {
//     int count = 0;
//     for (int i = 0; i < size; i++) {
//         if (price[i] > 1000)
//             count++;
//     }
//     return count;
// }

// int main() {
//     const int size = 8;
//     float price[size];

//     cout << "Enter prices of 8 products:\n";
//     for (int i = 0; i < size; i++) {
//         cout << "Product " << (i + 1) << ": Rs. ";
//         cin >> price[i];
//     }

//     cout << "\n--- Before Price Update ---\n";
//     cout << "Total Worth: Rs. " << totalWorth(price, size) << endl;

//     // Increase prices by 10%
//     increasePrices(price, size);

//     cout << "\n--- After 10% Price Increase ---\n";
//     for (int i = 0; i < size; i++) {
//         cout << "Product " << (i + 1) << ": Rs. " << price[i] << endl;
//     }

//     cout << "\nTotal Worth After Increase: Rs. " << totalWorth(price, size);
//     cout << "\nProducts costing more than Rs.1000: " << countExpensive(price, size);

//     return 0;
// }
//=============================================================
//Bus Ticket System
//A bus has 10 seats represented by a 1D array.
//0 means empty, 1 means booked.
//Write a program to count how many seats are empty and how many are booked.
//Let the user enter a seat number to book it (if already booked, show a message).

// int empty_seats(int arr[], int size);
// int book_seats(int arr[], int size);
// void booked(int arr[], int size);

// int main()
// {
//     int arr[10] = {0,1,0,1,0,1,0,1,0,1};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << empty_seats(arr, size) << endl;
//     cout << book_seats(arr, size) << endl;
//     booked(arr, size);
// }

// int empty_seats(int arr[], int size)
// {
//     int count = 0;
//     for(int i=0; i < size; i++){
//         if(arr[i] == 0){
//             count++;
//         }
//     }
//     return count;
// }

// int book_seats(int arr[], int size)
// {
//     int count = 0;
//     for(int i=0; i < size; i++){
//         if(arr[i] == 1){
//             count++;
//         }
//     }
//     return count;
// }

// void booked(int arr[], int size)
// {
//     int no;
//     cout << "enter ur seat no:";
//     cin >> no;
//         if(arr[no] == 1){
//          cout << "ur seat is already bookded";
//         }
//         else {
//          cout << "ur seat is now booked ";
//          arr[no] = 1;
//         }
// }
//==============================================================
