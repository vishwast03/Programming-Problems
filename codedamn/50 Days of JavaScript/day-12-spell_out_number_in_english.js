const sayNumberInEnglish = (n) => {
    if(n < 0 || n > 999999999999)
        return "number outside the blessed range".toUpperCase();

    let arr = [0, 0, 0, 0];
    let count = 0, idx = 0;
    let x = n;
    while(x > 0) {
        let d = x % 1000;
        x = parseInt(x / 1000);
        arr[idx] = d;
        idx++;
    }
    let ans = "";
    if(arr[3] != 0) {
        ans = ans + number0to999(arr[3]) + " billion";
    }
    if(arr[2] != 0) {
        if(ans != "")
            ans = ans + " ";
        ans = ans + number0to999(arr[2]) + " million";
    }
    if(arr[1] != 0) {
        if(ans != "")
            ans = ans + " ";
        ans = ans + number0to999(arr[1]) + " thousand";
    }
    if(arr[0] != 0) {
        if(ans != "")
            ans = ans + " ";
        ans = ans + number0to999(arr[0]);
    }
    if(ans == "")
        ans = "zero";

	return ans;
}

function number0to99(n) {
    if(n < 0 || n > 99)
        return "number outside the blessed range".toUpperCase();
    const numberEng = {
        0: "zero",
        1: "one",
        2: "two",
        3: "three",
        4: "four",
        5: "five",
        6: "six",
        7: "seven",
        8: "eight",
        9: "nine",
        10: "ten",
        11: "eleven",
        12: "twelve",
        13: "thirteen",
        14: "fourteen",
        15: "fifteen",
        16: "sixteen",
        17: "seventeen",
        18: "eighteen",
        19: "nineteen",
        20: "twenty",
        30: "thirty",
        40: "fourty",
        50: "fifty",
        60: "sixty",
        70: "seventy",
        80: "eighty",
        90: "ninety"
    }
    if(numberEng.hasOwnProperty(n))
        return numberEng[n];
    else {
        let d = n % 10;
        n = parseInt(n / 10) * 10;
        let ans = numberEng[n] + "-" + numberEng[d];
        return ans;
    }
}

function number0to999(n) {
    if(n < 0 || n > 999)
        return "number outside the blessed range".toUpperCase();
    if(n < 100)
        return number0to99(n);
    const numberEng = {
        1: "one",
        2: "two",
        3: "three",
        4: "four",
        5: "five",
        6: "six",
        7: "seven",
        8: "eight",
        9: "nine"
    }
    let d = n - (parseInt(n / 100) * 100);
    let ans = numberEng[parseInt(n / 100)] + " hundred";
    if(d !== 0)
        ans = ans + " " + number0to99(d);
    return ans;
}

console.log(`5635 in english is: ${sayNumberInEnglish(5635)}`)