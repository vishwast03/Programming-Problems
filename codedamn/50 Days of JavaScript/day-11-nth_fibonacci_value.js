function fibonacci(n) {
    if(n <= 2)
        return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

console.log(`fibonacci value at position 5: ${fibonacci(5)}`)
