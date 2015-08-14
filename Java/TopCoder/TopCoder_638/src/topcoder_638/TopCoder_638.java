/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_638;

import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_638 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        String str = in.next();
        
        String end="";
        
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)=='_')
            {
                Character c = str.charAt(i+1);//to upper
               char a= Character.toUpperCase(c);
                end+=a;
                i++;
            }
            else
            {
                end+=str.charAt(i);
            }
            
        }
        
        
        System.err.println("end is "+end);
        
    }
    
}
