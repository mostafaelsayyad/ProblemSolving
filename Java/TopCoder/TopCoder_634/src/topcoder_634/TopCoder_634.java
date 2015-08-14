/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_634;

import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_634 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt();
        
        int x[] = new int[9];
        
        for(int i=0;i<n;i++)
        {
            x[i]=in.nextInt();
        }
        
        int count = 0;
        for(int i=1;i<x.length-1;i++)
        {
            if(x[i]>x[i-1] && x[i]>x[i+1])
            {
                System.out.println("x is "+x[i]);
                count++;
            }
        }
        
        
        if(x[x.length-1]>x[x.length-2])
            count++;
        //{2,5,3,7,2,8,1,3,1}
        if(x[0]>x[1])
            count++;
        
        System.out.println("count is "+count);
        
    }
    
}
