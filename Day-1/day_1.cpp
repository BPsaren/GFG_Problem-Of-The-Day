class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
       unordered_map<int, int> count_map;

        // Iterate through the array and count element occurrences
        for (int i = 0; i < n; i++) {
            count_map[a[i]]++;
            
       if (count_map[a[i]] == k) {
                return a[i]; // Return the first element found with count k
            }
        }

     
        // No element found with count k
        return -1;
    }
};