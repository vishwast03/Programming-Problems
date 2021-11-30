function even_odd_sum(num){
	let evenSum = 0, oddSum = 0;
    while(num > 0) {
        let d = num % 10;
        num = parseInt(num / 10);
        if(d % 2 == 0)
            evenSum += d;
        else
            oddSum += d;
    }
    let result = [evenSum, oddSum];
    return result;
}