import java.util.Scanner;
class CountPrime {
    
    public boolean isPrime(int x) {
        for(int i = 2; i <= x / 2; i++) {
            if((x % i) == 0)
                return false;
        }
        return true;
    }
	
    public int totalPrime(int s, int e) {
        int count = 0;
        for(int i = s; i <= e; i++) {
            if(isPrime(i)) {
                count++;
            }
        }
        return count;
    }
    
}

class Solution {
	public static void main(String args[]) {
		
		CountPrime obj = new CountPrime();
		Scanner sc = new Scanner(System.in);
		int s = sc.nextInt();
		int e = sc.nextInt();
		System.out.println(obj.totalPrime(s, e));
	}
}