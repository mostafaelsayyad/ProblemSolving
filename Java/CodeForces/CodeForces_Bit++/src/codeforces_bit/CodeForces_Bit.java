/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package codeforces_bit;

import java.util.Scanner;

/**
 *
 * @author Family
 */
public class CodeForces_Bit {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt();
        int x = 0;
        String str="";
        for(int i=0;i<n;i++)
        {
            str = in.next();
            if(str.charAt(0)=='X')
            {
                if(str.charAt(1)=='+')
                    x++;
                else
                    x--;
            }
            else if(str.charAt(0)=='+')
            {
                x++;
            }
            else if(str.charAt(0)=='-')
            {
                x--;
            }
            
        }
        
        System.out.println(x);
        
        
    }
    
}
