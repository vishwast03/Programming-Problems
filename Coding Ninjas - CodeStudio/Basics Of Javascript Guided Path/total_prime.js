function prime(s , e){
     let count = 0;
     for(let i = s; i <= e; i++) {
         if(isPrime(i))
             count++;
     }
     return count;
 }
 
 function isPrime(n) {
     for(let i = 2; i <= (n / 2); i++) {
         if(n % i == 0)
             return false;
     }
     return true;
 }