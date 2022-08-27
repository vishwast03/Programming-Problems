//{ Driver Code Starts
//Initial Template for Java



import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            int n = Integer.parseInt(br.readLine().trim());
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            new Solution().rearrange(arr, n);
            for (int i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }
}

// } Driver Code Ends


//User function Template for Java




class Solution {
    void rearrange(int arr[], int n) {
        List<Integer> posNum = new ArrayList<>();
        List<Integer> negNum = new ArrayList<>();
        
        for(int i : arr) {
            if(i < 0)
                negNum.add(i);
            else
                posNum.add(i);
        }
        
        int i = 0, pi = 0, ni = 0;
        while(i < n) {
            if(pi < posNum.size()) {
                arr[i] = posNum.get(pi);
                i++;
                pi++;
            }
            if(ni < negNum.size()) {
                arr[i] = negNum.get(ni);
                i++;
                ni++;
            }
        }
    }
}