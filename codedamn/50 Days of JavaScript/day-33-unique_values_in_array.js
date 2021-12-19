function set(arrOfNum) {
	let unique = [arrOfNum[0]];
    
    for(let i = 1; i < arrOfNum.length; i++) {
        if(arrOfNum[i] !== unique[unique.length - 1]) {
            unique.push(arrOfNum[i]);
        }
    }

	return unique;
}

const arrOfNum = [1, 2, 2, 4, 5, 6, 6];

console.log("result is + " + set(arrOfNum));