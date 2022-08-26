//name : meemansa walia
//roll no. : 2010991939
//set : 04
//Q2: Given an integer array check if only consecutive integers from the array
#include <iostream>
#include <iostream>
#include <unordered_set>
using namespace std;

// Function to check if consecutive integers form an array
bool isConsecutive(int arr[], int n)
{
    // base case
    if (n <= 1) {
        return true;
    }

    int min = arr[0], max = arr[0];

    // compute the minimum and maximum element in an array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // for an array to contain consecutive integers, the difference between
    // the maximum and minimum element in it should be exactly `n-1`
    if (max - min != n - 1) {
        return false;
    }

    // create an empty set (we can also use a visited array)
    unordered_set<int> visited;

    // traverse the array and checks if each element appears only once
    for (int i = 0; i < n; i++)
    {
        // if element seen before return false
        if (visited.find(arr[i]) != visited.end()) {
            return false;
        }

        // marking element as seen
        visited.insert(arr[i]);
    }

    // when all elements are different
    return true;
}

int main()
{
    int size;
    cin>>size;
    int v;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>v;
        arr[i]=v;
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    isConsecutive(arr, size)? cout << "The array contains consecutive integers": cout << "The array does not contain consecutive integers";

    return 0;
}
