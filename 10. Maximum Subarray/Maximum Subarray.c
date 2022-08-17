

int maxSubArray(int* nums, int numsSize){
    int sum[100005];
    sum[0] = nums[0];
    int ans = sum[0];
    int minn = 0;
    if(sum[0] < minn)
        minn = sum[0];
    for(int i=1; i<numsSize; i++){
        sum[i] = sum[i-1] + nums[i];
        if(ans < sum[i] - minn)
            ans = sum[i] - minn;
        if(minn > sum[i])
            minn = sum[i];
    }
    return ans;
}