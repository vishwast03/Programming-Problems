const valid = (string) => {
	
    string = string
                .split(" ")
                .filter(value => {
                    return value.length != 0;
                })
                .join("");

    let regexp = /[^0-9]/g;
    if(regexp.test(string))
        return false;

    if(string.length <= 1)
        return false;

    let sum = 0;
    let flag = true;
    for(let i = 0; i < string.length; i++) {
        if(flag) {
            let doub = parseInt(string[i]) * 2;
            if(doub > 9)
                doub -= 9;
            sum += doub;
            flag = false;
        }
        else {
            sum += parseInt(string[i]);
            flag = true;
        }
    }
    
    if(sum % 10 == 0)
        return true;
    
    return false;
}