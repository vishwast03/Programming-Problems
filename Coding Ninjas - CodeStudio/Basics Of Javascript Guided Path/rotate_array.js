function rotate(arr , k){
  while(k--) {
      let temp = arr.shift();
      arr.push(temp);
  }
}