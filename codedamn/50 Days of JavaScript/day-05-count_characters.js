const str = 'XeroX';

function getTheGapX(str) {
    let f = str.indexOf('X');
    let l = str.lastIndexOf('X');
    if(f == -1) {
        return -1;
    }
    else {
        return (l - f);
    }
}

console.log(`Gap between the X's: ${getTheGapX(str)}`)
