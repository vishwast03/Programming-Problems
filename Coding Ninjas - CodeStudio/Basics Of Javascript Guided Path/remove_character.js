function remove_character(input , c){ 
    let i = 0;
    while(i < input.length) {
        if(input.charAt(i) == c) {
            let s = input.substring(0, i);
            let e = input.substring(i+1);
            input = s + e;
        }
        else
            i++;
    }
    return input;
  }