#define mod 1000000007
int *getProductArrayExceptSelf(int *arr, int n)
{
    int p = 1;
    int *result = new int[n];
    for(int i = 0; i < n; i++) {
        result[i] = p;
        p = (p * arr[i]) % mod;
    }
	p = 1;
    for(int i = n - 1; i >= 0; i--) {
        result[i] = (result[i] * p) % mod;
        p = (p * arr[i]) % mod;
    }
    return result;
}