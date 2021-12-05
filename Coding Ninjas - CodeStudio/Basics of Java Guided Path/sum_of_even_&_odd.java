import java.util.Scanner;
class Solution {
	
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int sumEven = 0, sumOdd = 0;
        
        while(n > 0) {
            int d = n % 10;
            n /= 10;
            
            if(d % 2 == 0)
                sumEven += d;
            else
                sumOdd += d;
        }
        
        System.out.println(sumEven + " " + sumOdd);
		
	}
}