const str = "JavaScript is awesome"

function reverseAString(str) {
    let rev = "";
    for(let i = 0; i < str.length; i++) {
        rev = str.charAt(i) + rev;
    }
    return rev;
}

console.log(`Reversed string is: ${reverseAString(str)}`)
