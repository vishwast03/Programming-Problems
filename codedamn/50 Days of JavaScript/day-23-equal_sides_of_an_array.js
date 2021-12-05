function findEvenIndex(arr) {
    let n = arr.length;

    let prefixSum = [0, ...arr];
    let suffixSum = [...arr, 0];

    for(let i = 0; i < n; i++) {
        prefixSum[i + 1] = arr[i] + prefixSum[i];
    }

    for(let i = n-1; i >= 0; i--) {
        suffixSum[i] = suffixSum[i+1] + arr[i];
    }

    let idx = -1;

    for(let i = 1; i <= n; i++) {
        if(prefixSum[i-1] === suffixSum[i]) {
            idx = i - 1;
            break;
        }
    }

    return idx;
}