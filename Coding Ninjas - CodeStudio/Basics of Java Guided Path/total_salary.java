import java.util.Scanner;
class Solution {
	
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
        
        int basic = sc.nextInt();
        char grade = sc.next().charAt(0);
        
        int allow;
        
        if(grade == 'A')
        	allow = 1700;
        else if(grade == 'B')
        	allow = 1500;
        else
        	allow = 1300;
        
        float hra = (float)basic / 100 * 20;
        float da = (float)basic / 100 * 50;
        float pf = (float)basic / 100 * 11;
            
        float totalSalary = basic + hra + da + allow - pf;
        
        System.out.println(Math.round(totalSalary));
		
	}
}