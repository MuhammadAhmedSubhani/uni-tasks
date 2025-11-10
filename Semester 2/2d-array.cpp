#include <iostream>
using namespace std;
// Scenario 1: Student Marks Analysis
// A class of 4 students has marks for 6 subjects. Store the marks in a 2D array. Calculate:
// Total marks for each student
// Average marks for each subject
// Student with highest total

const int students = 4; 
const int subjects = 6;

void marks(int arr[][subjects], int total_mark[]);
int avg(int arr[]);
int highest(int arr[]);

int main()
{
    int total_mark[students] = {};
    int arr[students][subjects] = 
    {
        {0,21,32,23,43,34},
        {1,87,56,76,98,45},
        {2,54,67,83,98,61},
        {3,43,23,65,23,97}
    };
    marks(arr, total_mark);
    for(int i=0; i< students ; i++){
        cout << "Total marks of student " << i << " is: " << total_mark[i] << endl;
    }
}

void marks(int arr[][subjects], int total_mark[])
{
    for(int i=0; i< students ; i++){
        for(int j=0; j < subjects; j++){
            total_mark[i] += arr[i][j] ;
        }
    } 
}

