int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));//dynamically loaded result
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i] + nums[j]== target){
                result[0] = i;
                result[1] = j;
                *returnSize = 2;  // Store size of the result
                return result; ;

            }
        }
    }
    free(result); // Free allocated memory
    return NULL;
}