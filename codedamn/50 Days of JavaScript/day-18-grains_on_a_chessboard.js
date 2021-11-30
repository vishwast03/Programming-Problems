const totalGrains = () => {
    let total = BigInt(1);
    let curr = BigInt(1);

    for(let i = 2; i <= 64; i++) {
        curr = curr << 1n;
        total = total + curr;
    }
	return total;
}

const grainsOn = (input) => {
    let ans = BigInt(1);
    if(input === 1)
        return ans;

    for(let i = 2; i <= input; i++) {
        ans = ans << 1n;
    }

	return ans;
}

console.log(`Grains on 5th square: ${grainsOn(5)}`)
console.log(`Total grains on the Chess Board: ${totalGrains()}`)