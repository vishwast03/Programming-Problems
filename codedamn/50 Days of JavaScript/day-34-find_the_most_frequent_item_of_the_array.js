function mostFreq(arr) {
	let freItem;
    let max = 0;
    let elements = {};
    arr.forEach(item => {
        if(!elements.hasOwnProperty(item)) {
            elements[item] = 1;
        }
        else {
            elements[item]++;
        }
    });
    Object.keys(elements).forEach(key => {
        if(elements[key] > max) {
            max = elements[key];
            freItem = key;
        }
    });
    if(parseInt(freItem))
        freItem = parseInt(freItem);

	return `${freItem} ${max}`;
}

const arr = [1, 2, 2, 4, 5, 6, 6];

console.log(mostFreq(arr));