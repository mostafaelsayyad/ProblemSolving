/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package codeforces_translation;

import java.util.Scanner;

/**
 *
 * @author Family
 */
public class CodeForces_Translation {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        String str1 = in.next();
        
        String str2 = in.next();
        
        String reversed = new StringBuilder(str1).reverse().toString();
                
        if(str2.equals(reversed))
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
        
        
        
    }
    
}
