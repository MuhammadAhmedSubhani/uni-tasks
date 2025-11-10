#include <iostream>
using namespace std;
// a program to find the largest element of a given array if integers by using functions
int largest(int arr[],int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

}
//largest 3 elements in array
    void largestThree(int arr[], int n) {
        int first =0, second = 0, third = 0;
        first = second = third;
        for (int i = 0; i < n; i++) {
            if (arr[i] > first) {
                third = second;
                second = first;
                first = arr[i];
            }
            else if (arr[i] > second && arr[i] != first) {
                third = second;
                second = arr[i];
            }
            else if (arr[i] > third && arr[i] != second && arr[i] != first) {
                third = arr[i];
            }
        }
        cout << "The three largest elements are: " << first << ", " << second << ", " << third << endl;
    }
// second largest element in array
    int secondLargest(int arr[], int n) {
        int largest, secondLargest;
        largest = secondLargest = 0;
        for (int i = 0; i < n; i++) {
            if (largest < arr[i]) {
                secondLargest = largest;
                largest = arr[i];
            }
            else if (secondLargest < arr[i]) {
                    secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
//k largest element in an array by bubble sorting.
    void kLargest(int arr[], int n, int k) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        cout << "The " << k << " largest elements are: ";
        for (int i = n - 1; i >= n - k; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

// second smallest element in array
    int secondSmallest(int arr[], int n) {
        int smallest, secondSmallest;
        smallest = secondSmallest = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < smallest) {
                secondSmallest = smallest;
                smallest = arr[i];
            }
            else if (arr[i] < secondSmallest && arr[i] != smallest) {
                secondSmallest = arr[i];
            }
        }
        return secondSmallest;
    }

// most frequent element in array
    int mostFrequent(int arr[], int n) {
        int maxCount = 0;
        int mostFrequentElement;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            if (count > maxCount) {
                maxCount = count;
                mostFrequentElement = arr[i];
            }
        }
        return mostFrequentElement;
    }

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    largest(arr, n);
    cout << "The largest element in the array is: " << largest(arr, n) << endl;
    largestThree(arr, n);
    cout << "The second largest element in the array is: " << secondLargest(arr, n) << endl;
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    kLargest(arr, n, k);
    cout << "The second smallest element in the array is: " << secondSmallest(arr, n) << endl;
    cout << "The most frequent element in the array is: " << mostFrequent(arr, n) << endl;

    return 0;
}
//======================================================================
