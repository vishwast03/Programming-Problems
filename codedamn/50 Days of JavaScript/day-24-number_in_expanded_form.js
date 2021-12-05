function expandedForm(num) {
    let x = num;
    let p = 0;
    let result = '';
    while(x > 0) {
        let d = x % 10;

        if(d != 0) {
            d *= Math.pow(10, p);
            result = '+' + d + result;
        }

        x = parseInt(x / 10);
        p++;
    }

    return result.slice(1);
}