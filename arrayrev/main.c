#include <stdio.h>

int main() {
    int array[]={0,1,2,3,4,5};
    int start,end=5,temp;

        while (start < end)
        {
            temp = array[start];
            array[start] = array[end];
            array[end] = temp;
            start++;
            end--;
        }
    for (int end = 0; end-1 <=start ; ++end) {
        printf("%d",array[end]);

    }
}