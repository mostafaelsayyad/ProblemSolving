/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_644;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_644 {

    /**
     * @param args the command line arguments
     */
    
    public static int Calculate(ArrayList<Integer>v, int difference)
    {
        int count = 0;
        for(int i=0;i<v.size()-1;i++)
        {
           for(int j=i+1;j<v.size();j++)
           {
               if(Math.abs(v.get(j)-v.get(i))<=difference)
               {
                   count++;
                   System.out.println("here first then prints");
               }
               
                System.out.println("v"+v.get(i));
            System.out.println("v2"+v.get(j));
            System.out.println("diff "+difference);
               
           }
            
           
        }
        return count;
    }
    //1 4 6 7 9
    //1,4
    //4,6
    //4,7
    //6,7
    //6,9
    //7,9
    
    
    //7,2,6,3,4,2,7,8,3,4,9,1,8,4,3,7,5,2,1,9,9,4,5}
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt();
        
        ArrayList<Integer> v = new ArrayList<Integer>();
        
        for(int i=0;i<n;i++)
        {
            v.add(in.nextInt());
        }
        
        int difference = in.nextInt();
        
        //Collections.sort(v);
        
        int sum = 0;
        
            sum+=Calculate(v, difference);
          //  System.out.println("---------");
           // difference--;
        
     //   System.out.println("sum is "+sum);
        
        
    }
    
}
