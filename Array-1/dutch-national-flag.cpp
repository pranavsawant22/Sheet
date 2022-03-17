//Problem link : https://leetcode.com/problems/sort-colors/
//Note dutch national flag algo

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        if(n==1 || is_sorted(arr.begin(),arr.end())){
            return;
        }
        int low=0,mid=0,high=n-1;
        while(mid <= high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                mid++;
                low++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                
                high--;
            }
        }
    return;
        
    }
};