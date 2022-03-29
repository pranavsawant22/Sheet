//video link  : https://www.youtube.com/watch?v=yDbkQd9t2ig&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=16
// problem link : https://leetcode.com/problems/majority-element-ii

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1=0,c1=0,e2=0,c2=0;
        
         
        for(int i:nums){
            if(e1 == i)c1++;
            else if(e2 == i)c2++;
            else if(c1==0){
                e1 = i;
                c1=1;
            }else if(c2==0){
                e2 = i;
                c2=1;
            }
            else{
                c1--;c2--;
            }
        }
       int a=0,b=0;
        for(int i:nums){
            if(i==e1)a++;
            else if(i==e2)b++;
        }
        int n = nums.size();
        if(a > n/3 and b>n/3 and e1!=e2){
            return {e1,e2};
        }
        else if(a>n/3){
            return {e1};
        }
        else if(b>n/3) return {e2};
        else return {};
    }
};