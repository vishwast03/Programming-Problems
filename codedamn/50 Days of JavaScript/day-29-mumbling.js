function accum(s) {
    let result = "";

    for(let i = 0; i < s.length; i++) {

        let ch = s[i].toUpperCase();
        let j = i + 1;

        while(j) {

            result = result + ch;
            ch = ch.toLowerCase();
            j--;

        }

        result = result + "-";
    }
    return result.slice(0, result.length - 1);
}

console.log(accum("ZpglnRxqenU"));