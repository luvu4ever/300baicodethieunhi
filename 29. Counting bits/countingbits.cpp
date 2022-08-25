class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> f(n+1, 0);
        for(int i=1; i<=n; i++)
            f[i] = f[i/2] + i%2;
        return f;
    }
};