// Name: Yash Maheshwari
// Roll_No: 2010992495 || G-21
// Paper Set: 03
// Question: 2

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void PrintPair(int arr[] ,int n ,int target){
    // boolean to check if we found any pair or not, initially true;
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            
            if (arr[i] + arr[j] == target)
            {
                // mark flag as flase to show we found a pair;
                flag = false;
                cout<<"Pair found ("<<arr[i]<<","<<arr[j]<<")"<<endl;
                cout<<"or"<<endl;
            }
        }
    }
    // checking if flag is true or not if true then no pair found;
    if(flag==true){
        cout<<"Pair not found"<<endl;
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
    int target;
    cout<<"Enter value of target: ";
    cin>>target;
    // Calling a PrintPair function;
    PrintPair(arr , n , target);

    return 0;
}
