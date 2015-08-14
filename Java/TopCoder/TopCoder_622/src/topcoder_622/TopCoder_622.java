/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_622;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_622 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        
        ArrayList<Integer>v = new ArrayList<Integer>();
        
  v.add(0);
  v.add(1);
  for(int i=2;v.get(v.size()-1)<=n;i++)
  {
      int x = v.get(i-1)+v.get(i-2);
      v.add(x);
  }
  
  int count = 0;
  int diff1 = 0;
  int diff2 = 0;
          
  Boolean needsbreak = false;
  
  for(int i=0;i<v.size();i++)
  {
      if(n==v.get(i))
      {
          System.out.println("0");
      }
      else if(n<v.get(i+1) && n>v.get(i))
      {
           diff1 = v.get(i+1)-n;
           diff2 = n-v.get(i);
          
          System.out.println("diff 1 is "+diff1);
          System.out.println("diff 2 is "+diff2);
          
          if(diff2<diff1)
          {
              int temp = n;;
              while(true)
              {
                  
                  System.out.println("temp is "+temp);
                  System.out.println("v of i is "+v.get(i));
                  if(temp==v.get(i))
                  {
                        System.out.println("return here");
                        needsbreak=true;
                        break;
                  }
                  else
                  {
                      System.out.println("decrements ?");
                      temp--;
                      count++;
                  }
              }
          }
          else
          {
              System.out.println("second path");
              int temp = n;;
              while(true)
              {
                  
                  System.out.println("temp is "+temp);
                  System.out.println("v of i is "+v.get(i+1));
                  if(temp==v.get(i+1))
                  {
                        System.out.println("return here");
                        needsbreak=true;
                        break;
                  }
                  else
                  {
                      System.out.println("decrements ?");
                      temp++;
                      count++;
                  }
              }
              
          }
          
          if(needsbreak)
              break;
          
      }
      
      
  }
        
  
        System.out.println("count is "+count);
    }
    
}
