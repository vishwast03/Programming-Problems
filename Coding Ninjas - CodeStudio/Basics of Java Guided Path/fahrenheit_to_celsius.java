import java.util.Scanner;
class Solution {
	
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
        
        int s = sc.nextInt();
        int e = sc.nextInt();
        int w = sc.nextInt();
        
        for(int f = s; f <= e; f += w) {
            float c = (float)(5.0 / 9) * (f - 32);
            
            if(c < 0)
            	System.out.println(f + "\t" + (int)Math.ceil(c));
            else
                System.out.println(f + "\t" + (int)Math.floor(c));
        }
        
	}
}