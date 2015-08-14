/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_642;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_642 {

    /**
     * @param args the command line arguments
     */
    
    public static int Transform(String str1,String str2)
    {
        int x = Integer.parseInt(str1);
        int y = Integer.parseInt(str2);
        
        return x+y;
    }
    
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        String str = in.next();
        //1498
        //1,498
        //14, 98
        //149
        
        ArrayList<Integer> v = new ArrayList<Integer>();
        
        for(int i=0;i<str.length()-1;i++)
        {
            String sub = str.substring(0,i+1);
            String sub2 = str.substring(i+1, str.length());
            
            //System.out.println("sub is "+sub);
            //System.out.println("sub2 is "+sub2);
            
            int count = Transform(sub, sub2);
            v.add(count);
            
        }
        
        for(int i=0;i<v.size();i++)
        {
            System.out.println(v.get(i));
        }
        
         Collections.sort(v);
        
         System.out.println(v.get(0));
    }
    
}
