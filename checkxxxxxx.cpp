vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    vector<int>sum;
     int s=0,i=0,k=0;
    for(auto i=A.begin();i!=A.end();i++){
        for(auto j=B.begin();j!=B.end();j++){
            s=*i+*j;
        sum.push_back(s);
        }
    }
    sort(sum.begin(),sum.end(),greater<int>());
    
    s=A.size();
    vector<int>ans;
    for(i=0;i<s;i++){
        k=A.at(i)+B.at(i);
        ans.push_back(k);
    }
    return ans;
    
    
}