/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_632;

import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_632 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        int N = in.nextInt();
        
        int d[] = new int [10];
        
        for(int i=0;i<10;i++)
        {
            d[i] = in.nextInt();
        }
        
        int lap = 0;
        //lap++;
        for(int i=0;i<d.length-1;i++)
        {
            //1 2 3 
            if(d[i+1]>d[i] && d[i+1]<=N)
            {
                
            }
            else
                lap++;
        }
        
        lap++;
        System.out.println("lap is "+ lap);
        
    }
    
}
