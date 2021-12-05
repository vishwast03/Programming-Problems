import java.util.Scanner;
class Solution {
	
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        if(n < 0) {
            System.out.println("Error");
            return;
        }

        int fact = 1;
        
        while(n > 1) {
            fact *= n;
            n--;
        }
        
        System.out.println(fact);
		
	}
}