// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int s = 0, e = n-1, m = 0;
    while(m <= e) {
        if(a[m] == 0) {
            int temp = a[s];
            a[s] = a[m];
            a[m] = temp;
            s++; m++;
        }
        else if(a[m] == 2) {
            int temp = a[e];
            a[e] = a[m];
            a[m] = temp;
            e--;
        }
        else {
            m++;
        }
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends