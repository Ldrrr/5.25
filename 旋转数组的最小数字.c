int minArray(int* numbers, int numbersSize)
{
    int i=0,j=numbersSize-1;
    while(i<j)
    {
        int mid=(i+j)/2;
        if(numbers[mid]>numbers[j])
        {
            i=mid+1;
        }
        else if(numbers[mid]<numbers[j])
        {
            j=mid;
        }
        else{
            j--;
        }
    }
    return numbers[i];
}
