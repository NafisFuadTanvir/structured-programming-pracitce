# include <stdio.h>
# include <stdlib.h>
int main()
{
    int N;
    printf("Enter size of array: ");
    scanf("%d", &N);
    if( N < 3 || N > 25)
    {
        printf("invalid size. go again.....");
        exit(0);
    }
    int A[N];
    int i, m, n;
    printf("Enter number in array : \n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Before reverse : \n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    int *left = A;
    int *right = &A[N-1];
    while(left < right)
    {
        m = *left + *right;
        n = *left * *right;
        if(!(m > n))
        {
        *left    ^= *right;
        *right   ^= *left;
        *left    ^= *right;
        }
        left++;
        right--;
    }
    printf("After reversing : \n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
