

int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    int cur = left;
    while(right - left > 1)
    {
        cur = (left + right) /2;
        if(nums[cur] < target)
            left = cur;
        else
            right = cur;
    }
    if(nums[left] == target)
        return left;
    if(nums[right] == target)
        return right;
    return -1;
}