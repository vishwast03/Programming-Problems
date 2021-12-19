function spinWords(string) {
    let result = '';
    let word = '';
    for(let i = 0; i < string.length; i++) {
        let ch = string.charCodeAt(i);
        if(!((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))) {
            result = result + reverseWord(word) + string[i];
            word = '';
        }
        else {
            word = word + string[i];
        }
    }
    result = result + reverseWord(word);
    return result;
}

function reverseWord(word) {
    if(word.length >= 5) {
        let rev = '';
        for(let i = 0; i < word.length; i++) {
            rev = word[i] + rev;
        }
        return rev;
    }
    else {
        return word;
    }
}

console.log(spinWords("Hey fellow warriors"));