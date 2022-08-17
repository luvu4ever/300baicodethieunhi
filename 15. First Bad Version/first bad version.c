// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

long long firstBadVersion(int n) {
    long long left = 0;
    long long right = n;
    while(right - left > 1){
        long long cur = (left + right) /2;
        if(isBadVersion(cur))
            right = cur;
        else
            left = cur;
    }
    if(isBadVersion(left))
        return left;
    if(isBadVersion(right))
        return right;
    return 1;
}