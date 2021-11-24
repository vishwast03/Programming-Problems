const time = '12:10AM';

function convertTo24HrsFormat(time) {
    let ans = "";
    let h = 0, m = 0;
    let x = 0;
    for(let i = 0; i < time.length; i++) {
        if(time.charAt(i) == ':')
            x = i;
    }
    h = parseInt(time.substring(0, x));
    m = parseInt(time.substring(x+1, time.length -2));

    if(time.endsWith('PM') && h < 12 && h >= 1) {
        h += 12;
    }
    else if(time.endsWith('AM') && h == 12) {
        h = 0;        
    }

    if(h < 10) {
        ans = ans + '0' + h + ':';
    }
    else {
        ans = ans + h + ':';
    }
    if(m < 10) {
        ans = ans + '0' + m;
    }
    else {
        ans = ans + m;
    }
    return ans;
}

console.log(`Converted time: ${convertTo24HrsFormat(time)}`)