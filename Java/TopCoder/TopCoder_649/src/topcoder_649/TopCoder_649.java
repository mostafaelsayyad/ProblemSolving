/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_649;

import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_649 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        String A = in.next();//long
        String B = in.next();//small
  
       
        String original = A;
        for(int i=0;i<A.length();i++)
        {
            StringBuilder sb = new StringBuilder(A);
            sb.deleteCharAt(i);
            String resultString = sb.toString();
            
            if(resultString.equals(B))
            {
                return "Possible";
            }
            
            A = original;
        }
        
        return "Impossible";
        
        
    
    }
    
}
