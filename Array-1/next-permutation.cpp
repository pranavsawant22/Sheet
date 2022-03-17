//Problem link - https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        
        if(is_sorted(arr.begin(),arr.end()) and arr.size()>2){
            swap(arr.back(),arr[arr.size()-2]);
            return;
        }
        if(is_sorted(arr.rbegin(),arr.rend()) || arr.size()==1){
            sort(arr.begin(),arr.end());
            return;
        }
        int index1 = -1,index2=-1;
        for(int j = arr.size()-2;j>=0;j--){
            if(arr[j] < arr[j+1]){
                index1 = j;
                break;
            }
        }
        for(int j = arr.size()-1;j>index1;j--){
            if(arr[index1] < arr[j]){
                index2=j;
                break;
            }
        }
        swap(arr[index1],arr[index2]);
        reverse(arr.begin()+index1+1,arr.end());
        return;
        
    }
};