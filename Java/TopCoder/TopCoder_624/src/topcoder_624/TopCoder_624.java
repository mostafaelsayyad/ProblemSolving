/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_624;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_624 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        int n = 2;
        int arr[] = new int [4];
        
        for(int i=0;i<4;i++)
        {
            arr[i] = in.nextInt();
        }
        
        Arrays.sort(arr);
        
        for(int i=0;i<arr.length;i++)
            System.out.println("arr is "+arr[i]);
        
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum +=arr[i];
        }
        
        System.out.println("sum is "+sum);
        
    }
    
}
