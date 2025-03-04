//find median of two sorted arrays
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    double findMedian(vector<int>& nums1, vector<int>& nums2){
    //time limit exceded
        int m = nums1.size();
        int n = nums2.size();
        vector<int> arr;
        int i = 0, j = 0;
        while(i < m && j < n){//merge elements inside new array
            if(nums1[i] < nums2[j]) arr.push_back(nums1[i++]);
            else arr.push_back(nums2[j++]);
        }
        while(i < m) arr.push_back(nums1[i++]);
        while(j < n) arr.push_back(nums2[j++]);
        int k = arr.size();//get the median
        if(k%2 == 1) return arr[k/2];
        return (double)((double)(arr[k/2]) + (double)(arr[k/2 - 1]))/2.0;
    }
    /*better
    keep a index tracker and get the  required index hypothetically*/ 
    double Median(vector<int>& nums1, vector<int>& nums2){
        int n1 = nums1.size(), n2 = nums2.size();
        int i = 0, j = 0;
        int n = n1 + n2;
        int ind2 = n/2;//index we need 
        int ind1 = ind2 - 1;
        int ind1el = -1, ind2el = -1;
        int cnt = 0;
        //pick elements in sorted order
        while(i < n1 && j < n2){
            if(nums1[i] < nums2[j]){// nums1 elements < nums2 elements
                if(cnt == ind1) ind1el = nums1[i];
                if(cnt == ind2) ind2el = nums1[i];
                cnt++;
                i++;
            }
            else{                  //nums1 element > nums2 elements
                if(cnt == ind1) ind1el = nums2[j];
                if(cnt == ind2) ind2el = nums2[j];
                cnt++;
                j++;
            }
        }
        while(i < n1){//pick element of array1 as array2 has exhausted
            if(cnt == ind1) ind1el = nums1[i];
            if(cnt == ind2) ind2el = nums1[i];
            cnt++;
            i++;
        }
        while(j < n2){//pick element of array2 as array1 has exhausted
            if(cnt == ind1) ind1el = nums2[j];
            if(cnt == ind2) ind2el = nums2[j];
            cnt++;
            j++;
        }
        if(n % 2 == 1) return ind2el;
        return double((double)(ind1el + ind2el)) / 2.0;
    }
    /*optimal solution*/
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;
        if(n1 > n2) return findMedianSortedArrays(nums2, nums1);//swap the arrays
        int low = 0, high = n1;
        /*the left half will be this itself only*/
        int left = (n1 + n2 + 1)/2;
        while(low <= high){
            int mid1 = (low + high) >> 1;//------------>?
            int mid2 = left - mid1;
            int l1 = INT_MIN, l2 = INT_MIN;//--------------->?
            int r1 = INT_MAX, r2 = INT_MAX;

            if(mid1 < n1) r1 = nums1[mid1];
            if(mid2 < n2) r2 = nums2[mid2];
            if(mid1-1 >= 0) l1 = nums1[mid1 - 1];
            if(mid2-1 >= 0) l2 = nums2[mid2 - 1];
            if(l1 <= r2 && l2 <= r1){
                if(n%2 == 1) return max(l1,l2);
                else return ((double)(max(l1,l2) + min(r1,r2)))/2.0;
            }
            else if(l1 > r2) high = mid1 - 1;
            else low = mid1 + 1;
        }
        return 0.0;
    }
};
int main(){
    vector<int> arr1 = {7, 8, 9};
    vector<int> arr2 = {4, 5, 6};
    Solution s;
    cout<<"median: "<<s.findMedianSortedArrays(arr1,arr2);
    return 0;
}
