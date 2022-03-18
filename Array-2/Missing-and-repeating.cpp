//Problem link : https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	vector<int> mp(n+1,0);
    for(int i:arr){
      
            mp[i]++;
        
    }
    int a,b;
    for(int i=1;i<=n;i++){
        if(mp[i]>=2)a=i;
        if(mp[i]==0)b=i;
    }
	return {b,a};
}
