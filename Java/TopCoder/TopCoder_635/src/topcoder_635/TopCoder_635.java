/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_635;

import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_635 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        String s=in.next();
        String t=in.next();
        
        if(t.length()>s.length())
            System.out.println("false");
        
        int j=0;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)==t.charAt(j))
            {
                count++;
                j++;
            }
            if(count==t.length())
                break;
        }
        
        if(count==t.length())
            System.out.println("true");
    }
    
}
