import java.util.Scanner;
class Solution {
	
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
        
        int p = sc.nextInt();
        float r = sc.nextFloat();
        int t = sc.nextInt();
        
        int si = (int)Math.floor((p * r * t) / 100);
        
        System.out.println(si);
		
	}
}