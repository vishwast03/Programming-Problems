import java.util.Scanner;
class Solution {
	
	public static void main(String args[]) {
		
		Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int k = sc.nextInt();
        
        int rotated[] = new int[n];
        for(int i = 0; i < n; i++) {
            rotated[i] = arr[(i + k) % n];
        }
        
        for(int i = 0; i < n; i++) {
            System.out.print(rotated[i] + " ");
        }
		
	}
}