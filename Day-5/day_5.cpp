class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int>ans;
            int n=text.size();
            int m=pattern.size();
            if(n<m){
                return {-1};
            }
            for(int i=0;i<n-m+1;i++){
                if(text[i]==pattern[0]){
                    if(text.substr(i,m)==pattern){
                        ans.push_back(i+1);
                    }
                }
                
            }
            return ans;
        }
};