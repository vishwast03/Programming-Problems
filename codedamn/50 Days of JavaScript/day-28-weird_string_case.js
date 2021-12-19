function toWeirdCase(string) {
    let result = "";

    for(let i = 0; i < string.length; i++) {

        if(i % 2 == 0) {
            result = result + string[i].toUpperCase();
        }
        else {
            result = result + string[i].toLowerCase();
        }
    }
    
    return result;
}

console.log(
  `The weird case of ${"A test case"} is ${toWeirdCase("A test case")}`
);
