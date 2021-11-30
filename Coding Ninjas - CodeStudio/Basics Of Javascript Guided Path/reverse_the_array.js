function reverse(arr){
   let low = 0, high = arr.length - 1;
   while(low < high) {
       let temp = arr[low];
       arr[low] = arr[high];
       arr[high] = temp;
       low++;
       high--;
   }
}