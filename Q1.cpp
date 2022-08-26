// Name: Yash Maheshwari
// Roll_No: 2010992495 || G-21
// Paper Set: 03
// Question: 1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// rearrange function whose return value is void and takes an array and it's size as parameters;
void Rearrange(int arr[], int n){
    // for loop starting from 1 not from 0 so that we can check for previous element as well;
    for (int i = 1; i < n; i += 2)
    {
    // checking condition 1: if the element present before is less or greater, if greater then swap the elements
        if (arr[i - 1] > arr[i]) {
            arr[i-1]^=arr[i];
            arr[i]^=arr[i-1];
            arr[i-1]^=arr[i];
        }
    // checking condition 2: if the element present after is less or greater, if greater then
    //swap the elements also check that index i+1 should not exceed the size of an array.
        if (arr[i + 1] > arr[i] && (i + 1 < n)) {
            arr[i+1]^=arr[i];
            arr[i]^=arr[i+1];
            arr[i+1]^=arr[i];
        }

    }
    cout<<"output: ";
    // loop for printing elements of an array;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    // Taking an input for size of an array;
    int arr[n];
    // Inserting Elements in an array;
    cout<<"Input: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // Calling a rearrange function;
    Rearrange(arr , n);

    return 0;
}


