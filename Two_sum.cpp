#include<bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here.
    
    vector<pair<int,int>> res;
    sort(arr.begin(),arr.end());
    int low=0,high=n-1;
    while(low<high)
    {
        
        if(arr[low]+arr[high]>target)
            high--;
        else if(arr[low]+arr[high]<target)
            low++;
        else if(arr[low]+arr[high]==target)
        {
		res.push_back({arr[low],arr[high]});
        low++;
        high--;}
        
    }
        if(res.empty()) res.push_back({-1,-1});
         return res;
 }

