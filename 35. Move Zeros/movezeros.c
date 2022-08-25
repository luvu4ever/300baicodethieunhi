

void moveZeroes(int* nums, int numsSize){
    int cur = 0;
    int cur0pos = 0;
    int count = 0;
    for(int cur = 0; cur < numsSize; cur ++){
        if(nums[cur]){
            nums[cur0pos] = nums[cur];
            cur0pos++;
        }
        else
            count++;
    }
    for(int i = numsSize - 1; i >= numsSize - count; i--)
        nums[i] = 0;
}