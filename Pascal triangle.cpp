#include <bits/stdc++.h>

using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>>res(n+1,vector<long long>(n+1));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i )
                res[i][j]=1;
        else
            res[i][j]=(res[i-1][j-1]+res[i-1][j]);
        }
    }
    vector<vector<long long int>>ans;
    for(auto it:res)
    {
       vector<long long int>temp;
       for(auto i:it){
       if(i!=0) temp.push_back(i);    
       }
       ans.push_back(temp);
       
    }
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return res;
}

int main()
{
    int n;
    cin>>n;
    printPascal(n);
    return 0;
}
