function gcd(a, b) {
    
	while(a != b) {
        if(a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }

	return a;
}

const a = 2154
const b = 458

console.log("The GCD of " + a + " ", b + " is " + gcd(a, b));