function getCount(str) {
  let vowelsCount = 0;

  for (let i = 0; i < str.length; i++) {
    let regexp = /[aeiou]/i;
    if (regexp.test(str[i])) {
      vowelsCount++;
    }
  }

  return vowelsCount;
}

console.log(getCount("abracadabra"));
