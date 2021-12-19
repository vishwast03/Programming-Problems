void sort012(int *arr, int n)
{
   	int s = 0, m = 0, e = n - 1;
    while(m <= e) {
        if(arr[m] == 0) {
            swap(arr[m], arr[s]);
            s++;
            m++;
        }
        else if(arr[m] == 2) {
            swap(arr[m], arr[e]);
            e--;
        }
        else {
            m++;
        }
    }
}