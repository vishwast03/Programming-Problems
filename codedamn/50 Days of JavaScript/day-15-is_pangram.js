const isPangram = (input) => {
    input = input.toLowerCase();
    let arr = new Array(26);
    arr.fill(0);
    let n = input.length;
    for(let i = 0; i < n; i++) {
        let ch = input.charCodeAt(i);
        if(ch >= 97 && ch <= 122) {
            arr[ch - 97]++;
        }
    }
    for(idx in arr) {
        if(!arr[idx])
            return false;
    }
	return true;
}