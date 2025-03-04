//2nd Largest Element in Array without sorting
#include<iostream>
#include<climits>
using namespace std;

class Solution{
    public:
    int print2largest(int arr[], int n){
        if(n<2){
            cout<<"Enter a valid array "<<endl;
            return -1;
        }
        int largest = INT_MIN;
        int secondlargest = INT_MIN;
        for(int i = 0; i < n; i++){
            if(arr[i] > largest){
                secondlargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secondlargest && arr[i]!= largest)
                secondlargest = arr[i];
        }
        if(secondlargest == INT_MIN)
            return -1; // return -1 if all elements are same
        
        return secondlargest;
    }
};

int main(){
    int arr[] = {4, 0, 1, 2, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution s;
    int secondlargest = s.print2largest(arr, n);
    if(secondlargest!= -1)
        cout<< "The second largest element is "<<secondlargest<<endl;
    else
        cout << "All elements are same" << endl;

    return 0;
}