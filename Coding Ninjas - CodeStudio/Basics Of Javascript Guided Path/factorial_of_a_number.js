function fact(n){
	if(n < 0) {
        return 'Error';
    }
    if(n == 0) {
        return 1;
    }
    let f = 1;
    for(let i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}