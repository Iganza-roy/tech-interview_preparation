#include <stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *res = (int*)malloc(2 * sizeof (int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = (i+1); j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return (res);
            }
        }
    }
    returnSize = 0;
    return (NULL);
}

int main() 
{
    int nums[] = {3, 2, 4};
    int target = 6;
    int returnSize;
    int* indices = twoSum(nums, 4, target, &returnSize);
    if (indices != NULL) {
        printf("[%d, %d]\n", indices[0], indices[1]);
        free(indices);
    } else {
        printf("No solution found.\n");
    }
    return 0;
}