function reverse(input){
	return input.split(' ').map(function(word) {
   		return word.split('').reverse().join('');
 	}).join(' ');
}