/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_631;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_631 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        int count = 0,max = 0;
        char prev;
        
        for(int i=0;i<grid.length;i++)
        {
            prev = grid[0].charAt(i);
            count = 1; 
            
            for(int j=1;j<grid[i].length();j++)
            {
                if(grid[j].charAt(i)==prev)
                    count++;
                else
                {
                    max = Math.max(count,max);
                    count = 1;
                    prev = grid[j].charAt(i);
                }
            }
            max = Math.max(count,max);
        }
        return max = Math.max(count,max);
        
    }
    
}
