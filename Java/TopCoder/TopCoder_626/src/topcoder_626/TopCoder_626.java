/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_626;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

/**
 *
 * @author Family
 */
public class TopCoder_626 {

   
    public static void main(String[] args) 
    {
        
        int [] array = new int [2];
        
        array[0] = 1;
        array[1] = 2;
        
        
        int sum = 0;
        for(int i=0;i<array.length;i++)
        {
            for(int j=0;j<array.length;j++)
            {
                for(int k=i;k<=j;k++)
                {
                    sum+=array[k];
                }
            }
        }
   
        System.out.println("sum is "+sum);
        
        
        
        
    }
    
}
