//Problem link : https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
          ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       int a = m-1,b=n-1,i=m+n-1;
        while(a>=0 and b>=0){
            if(nums1[a] > nums2[b]){
                nums1[i--] = nums1[a--];
            }
            else{
                nums1[i--] = nums2[b--];
            }
        }
        while(b>=0){
            nums1[i--] = nums2[b--];
        }
    }
};