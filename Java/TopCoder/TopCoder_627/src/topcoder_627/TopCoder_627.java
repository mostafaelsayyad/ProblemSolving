/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_627;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_627 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        int x[] = new int [20];
        //{{1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 3, 3}}
        for(int i=0;i<9;i++)
        {
            x[i] = in.nextInt();
        }
        Arrays.sort(x);
        //reverse
        
        for(int i = 0; i < x.length/2; i++)
        {
            int temp = x[i];
            x[i] = x[x.length - i - 1];
            x[x.length - i - 1] = temp;
        }
        
        int count = 0;
        //int sum = 0;
        for(int i=0;i<x.length;i++)
        {
            try{
            if(x[i]==x[i+1] && x[i+1]==x[i+2] && x[i+2]==x[i+3])
            {
                count++;
                i+=3;
            }    
            
            
            }catch(Exception e)
            {
                System.out.println("count is "+count);
                break;
            }
            
            
            
        }
        
    }
    
}
