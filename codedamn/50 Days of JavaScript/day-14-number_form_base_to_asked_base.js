/**
 *
 * @param {number[]} digits Array of valid digits of baseA
 * @param {number} baseA base a
 * @param {number} baseB base b in which digits are to be converted
 * @returns {number[]} Array of valid digits of baseB
 */


 const convertDigitsToAskedBase = (digits, baseA, baseB) => {
    let decimal = 0;
    let n = digits.length;
    for(let i = 0; i < n; i++) {
        decimal += digits[i] * (Math.pow(baseA, (n - i - 1)));
    }
    let ans = [];
    while(decimal > 0) {
        ans.unshift(parseInt(decimal % baseB));
        decimal = parseInt(decimal / baseB);
    }
	return ans;
}