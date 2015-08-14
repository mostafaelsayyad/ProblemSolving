/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_637;

import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_637 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int []x = new int [2];
        int []y = new int [2];
        
        Scanner in = new Scanner(System.in);
        
        
        int n = 2;
        
        for(int i=0;i<n;i++)
            x[i]=in.nextInt();
        
        for(int i=0;i<n;i++)
            y[i]=in.nextInt();
        
        
        int count=0;
        for(int i=0;i<x.length;i++)
        {
            if(x[i]>y[i])
                count++;
        }
        System.out.println("conut is "+count);
        
    }
    
}
