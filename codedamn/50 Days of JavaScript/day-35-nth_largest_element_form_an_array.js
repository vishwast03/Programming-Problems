function nthlargest(arr, highest) {
	let arr2 = [...arr];
    arr2.sort((a, b) => b - a);
	return arr2[highest - 1];
}

const arr = [43, 56, 23, 89, 88, 90, 99, 652];
const highest = 4;

console.log(nthlargest(arr, highest));