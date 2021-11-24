const str = 'JavaScript is simple but not easy to master';
const wordLimit = 3

function truncateWithWordLimit(str, wordLimit) {
    let x = wordLimit;
    let i;
    for(i = 0; i < str.length; i++) {
        if(str.charAt(i) == ' ') {
            x--;
            if(x == 0)
                break;
        }
    }
    return str.substring(0, i);
}

console.log(`Truncated string: ${truncateWithWordLimit(str, wordLimit)}`)
