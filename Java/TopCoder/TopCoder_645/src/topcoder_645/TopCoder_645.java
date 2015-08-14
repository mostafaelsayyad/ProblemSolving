/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_645;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_645 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //78, 34, 3, 54, 44, 99 
        
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        ArrayList <Integer> v = new ArrayList <Integer>();
        ArrayList <Integer> v2 = new ArrayList <Integer>();
        
      int z[]=null ;
        //ArrayList <Integer> qq = new ArrayList <Integer>(Arrays.asList(z));
           int count = 0;
 
      for(int i=0;i<n;i++)
        {
            v.add(in.nextInt());
        }
        
   count=2;
   Boolean NoMoreChanges = false;
while(count>1)
{
    count = 0;  
        for(int i=1;i<v.size()-1;i++)
        {
            int x=0;
                if(v.get(i)<v.get(i-1) && v.get(i)<v.get(i+1))
                {
                    x = v.get(i);
                    x++;
                    count+=2;
                    v.set(i, x);
           //         break;
                    //System.out.println("v.get my i is "+v.get(i));
                }
                else if(v.get(i)>v.get(i-1) && v.get(i)>v.get(i+1))
                {
                    x = v.get(i);
                    x--;
                    count+=2;
                    v.set(i, x);
             //       break;
                }
                //else
                  //  NoMoreChanges = true;
                    
            }
}
                
        
        for(int i=0;i<v.size();i++)
        {
            System.out.print("values is "+v.get(i)+" , ");
        }
        //{{78, 34, 3, 54, 44, 99}}
        
        //{78, 34, 34, 49, 49, 99}//expected
    }
    
}
