class Solution
{
    vector<int> computeLPS(string pat) {
    int m = pat.length();
    vector<int> lps(m);
    lps[0] = 0;  // Base case: LPS of length 1 string is always 0

    // Build the LPS array
    int i = 1, j = 0;
    while (i < m) {
        if (pat[i] == pat[j]) {
            lps[i] = j + 1;
            i++;
            j++;
        } else {
            if (j != 0) {
                j = lps[j - 1];  // Use LPS information to move back in the pattern
            } else {
                lps[i] = 0;  // No match, set LPS[i] to 0
                i++;
            }
        }
    }
    return lps;
}
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
           int m = pattern.length();
    int n = text.length();

    vector<int> indices;  // Store starting indices of pattern occurrences

    if (n < m) {
        return indices;  // Pattern cannot be found if it's longer than the text
    }

    // Preprocess the pattern to compute LPS array
    vector<int> lps = computeLPS(pattern);

    int i = 0, j = 0;
    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == m) {
            indices.push_back(i - j + 1); // Starting index of the pattern occurrence
            j = lps[j - 1];               // Utilize LPS for efficient shift
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];  // Use LPS to jump to a potential match
            } else {
                i++;                // No match, advance in the text
            }
        }
    }

    return indices;
            }
     
};