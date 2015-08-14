/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_625;

import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_625 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        int res = in.nextInt();
        
        int x,y,z;
        
        x=2;y=2;
        
        z=res-(x*y);
        if(z==0 || z==1)
        {
            y=-2;
            z=res-(x*y);
        }
            
        
        System.out.println(x+"   "+y+"  "+z);
        
    }
    
}
