int occursOnce(vector<int> &a, int n){
	// Write your code here.
    unordered map<int,int>m;
    for(auto it:a)
    {
        m[it]++;
    }
	for(auto it:m)
    { if(it.second==1)
            return it.first;}
}
