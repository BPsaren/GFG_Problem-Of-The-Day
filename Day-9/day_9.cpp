//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	     unordered_map<char, int> mapp;
	    string result = ""; // This will store the result without duplicates
	    
	    // Iterate over each character in the string
	    for(char c : str){
	        // If the character is not yet in the map, it means it's not a duplicate
	        if(mapp[c] == 0){
	            result += c; // Append it to the result string
	            mapp[c] = 1; // Mark this character as seen
	        }
	    }
	    return result;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends