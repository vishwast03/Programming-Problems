function count_words(str){
     let sCount = 0;
     for(let i = 0; i < str.length; i++) {
         if(str.charAt(i) == ' ')
             sCount++;
     }
     return sCount + 1;
 }