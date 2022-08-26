//name : meemansa walia
//roll no. 2010991939
//SET :04
//Q1. given an integer array find the minimum index of a repeating element in linear time and doing just a single traversal of the array
#include <iostream>
#include <unordered_set>
using namespace std;

// Func to find the min index of the repeating element
int MinIndex(int arr[], int n)
{
    int minIndex = n;

    // creating empty set to store array elements
    unordered_set<int> set;

    // traversing the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if element seen before update min index
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        // if the element seen first time insert into set
        else {
            set.insert(arr[i]);
        }
    }

    // invalid input
    if (minIndex == n) {
        return -1;
    }

    // return minimum index
    return minIndex;
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

    int minIndex = MinIndex(arr, n);

    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }

    return 0;
}
