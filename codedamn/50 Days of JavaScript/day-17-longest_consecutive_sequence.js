/**
 *
 * @param {number[]} inputArray Array of numbers
 */
 const longestConsecutiveSequence = (inputArray) => {
	const s = new Set();
    let n = inputArray.length;

    for(let i = 0; i < n; i++) {
        s.add(inputArray[i]);
    }

    let ans = 0;

    for(let i = 0; i < n; i++) {
        
        if(!s.has(inputArray[i] - 1)) {

            let j = inputArray[i];

            while(s.has(j)) {
                j++;
            }

            ans = Math.max(ans, j - inputArray[i]);

        }

    }

    return ans;
}