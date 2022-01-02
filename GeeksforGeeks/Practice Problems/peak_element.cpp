// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdbool.h>


 // } Driver Code Ends
//User function Template for C

int peakElement(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    if(n == 1)
        return 0;
    
    while(s <= e) {
        if(mid > 0 && mid < n - 1) {
            if(arr[mid-1] <= arr[mid] && arr[mid] >= arr[mid+1]) {
                return mid;
            }
            else if(arr[mid-1] > arr[mid]) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        else if(mid == 0) {
            if(arr[0] > arr[1])
                return 0;
            else
                return 1;
        }
        else if(mid == (n-1)) {
            if(arr[n-2] < arr[n-1])
                return n-1;
            else
                return n-2;
        }
        mid = s + (e - s) / 2;
    }
}

// { Driver Code Starts.

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
			tmp[i] = a[i];
		}
		bool f=0;
		
		int A = peakElement(tmp,n);
		
		if(A<0 && A>=n)
		    printf("0\n");
		else
		{
		if(n==1 && A==0)
		f=1;
		else
		if(A==0 && a[0]>=a[1])
		f=1;
		else if(A==n-1 && a[n-1]>=a[n-2])
		f=1;
		else if(a[A]>=a[A+1] && a[A]>= a[A-1])
		f=1;
		else
		f=0;
		printf("%d\n", f);
		}
		
	}

	return 0;
}  // } Driver Code Ends