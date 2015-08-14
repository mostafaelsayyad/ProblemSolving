/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_650;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_650 {

    /**
     * @param args the command line arguments
     */
    
    public static ArrayList<Integer> Calculate(int x)
    {
        ArrayList<Integer> v1 = new ArrayList<Integer>();
        int result=0;
        v1.add(x);
        while(true)
         {
            if(x%2 == 0)
            {
                result = x /2; 
                x = result;
                v1.add(x);
                
            }
            else
            {
                break;
            }
        }
         return v1;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int x = in.nextInt();
        int y = in.nextInt();
        
        int count=0;
        
        ArrayList<Integer> v1 = Calculate(x);
        ArrayList<Integer> v2 = Calculate(y);
        
        for(int i=0;i<v1.size();i++)
        {
            if(v2.contains(v1.get(i)))
            {
                count++;
            }
        }
        
       // count--;
        System.out.println("count is "+count);
        
        
    }
    
}
