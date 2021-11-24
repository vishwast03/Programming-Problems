const num = 3849;

function reverseGivenInteger(num) {
    let rev = 0;
    while(num > 0) {
        let d = num % 10;
        num = Math.floor(num / 10);
        rev = rev * 10 + d;
    }
    return rev;
}

console.log(`Reversed integer is: ${reverseGivenInteger(num)}`)
