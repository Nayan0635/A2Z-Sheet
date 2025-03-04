/*allocate n books to m students such that maximum no
of pages assigned to any particular students is minimum*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool countStudents(vector<int>& arr,int pages, int m){
        int student = 1;
        long long pagesStudent = 0;
        for (int i = 0; i < arr.size(); i++){
            if(pagesStudent + arr[i] > pages){//above assigned pages
                student++;//I need another student
                pagesStudent = arr[i];//holding these many pages
            }
            else
            //(currently holding + pages in curr book) under pages I'm allowed to hold
                pagesStudent+= arr[i];
            if(student > m) return false;//I need more students
        }
        return true;
    }
    int findPages(vector<int>& arr, int n, int m){
        if(m > n) return -1;
        int low = *max_element(arr.begin(),arr.end());//need to allocate all books
        int high = accumulate(arr.begin(),arr.end(), 0);//one student
        while(low <= high){
            int mid = low + (high-low)/2;
            if(countStudents(arr,mid,m) == false)
                low = mid + 1;//increase the no of pages
            else
                high = mid - 1;
        }
        return low;
    }
};
int main(){
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;//books
    int m = 4;//student
    Solution s;
    cout<<"Max no of pages a student receive = "<<s.findPages(arr, n, m);
    return 0;
}