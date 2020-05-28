int search(int* nums, int numsSize, int target)
{
    int i=0,j=numsSize-1,cnt=0;
    while(i<j)
    {
        int mid=(i+j)/2;
        if(nums[mid]<target) i=mid+1;
        if(nums[mid]>=target) j=mid;
    }
    while(i<numsSize&&nums[i++]==target) cnt++;
    return cnt;
}
