class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        int maxIndex = 0;
        int minLeft[n], maxRight[n];

        minLeft[0] = a[0];
        for (int i = 1; i < n; i++)
            minLeft[i] = min(minLeft[i - 1], a[i]);

        maxRight[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
            maxRight[i] = max(maxRight[i + 1], a[i]);

        int i = 0, j = 0;
        while (i < n && j < n) {
            if (minLeft[i] <= maxRight[j]) {
                maxIndex = max(maxIndex, j - i);
                j++;
            } else {
                i++;
            }
        }
        return maxIndex;
    }
};