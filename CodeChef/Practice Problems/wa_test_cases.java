/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while(t-- > 0) {
		    int n = sc.nextInt();
		    
		    int[] s = new int[n];
		    for(int i = 0; i < n; i++) {
		        s[i] = sc.nextInt();
		    }
		    String v = sc.next();
		    
		    int minSize = 100;
		    for(int i = 0; i < n; i++) {
		        if(v.charAt(i) == '0') {
		            minSize = Math.min(minSize, s[i]);
		        }
		    }
		    
		    System.out.println(minSize);
		}
	}
}
