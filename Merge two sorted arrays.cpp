#include <bits/stdc++.h>

using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    for(int i=0;i<n;i++)
        {
            int j=m-n-1;
        
                while(arr1[j]>arr2[i] && j>=0)
                {
                 arr1[j+1]=arr1[j];
                    j--;
                }
             arr1[j+1]=arr2[i];
        m++;
        
     }
        return arr1;
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<int>a(m+n);
    vector<int>b(n);
    for(int i=0;i<m+n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    vector<int>ans=ninjaAndSortedArrays(a,b,m+n,n);
    for(auto it:ans) cout<<it<<" ";
    

    return 0;
}
