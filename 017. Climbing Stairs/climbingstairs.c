

int climbStairs(int n){
    int f[1000];
    for(int i=1; i<=n; i++)
        f[i] = 0;
    f[1] = 1;
    f[2] = 2;
    for(int i=3; i<=n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}
