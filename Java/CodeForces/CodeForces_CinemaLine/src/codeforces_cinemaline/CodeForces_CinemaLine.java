/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package codeforces_cinemaline;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class CodeForces_CinemaLine {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int counterOf100 = 0;
        int counterOf50 = 0;
        int counterOf25 = 0;
        int change = 0;
        int myBalance = 0;
        Scanner in = new Scanner(System.in);
      
        Boolean ok = true ;
        
        int n = in.nextInt();
        System.out.println("n is "+n);
        for(int i=0 ; i<n ; i++)
        {
            int num = in.nextInt();
            if(num==25)
            {
                counterOf25++;
                //change = 0;
            }
            else if(num ==50)
            {
                counterOf50++;
                //change = 25;
                if(counterOf25>0)
                    counterOf25--;
                else
                {
                    ok = false;
                    break;
                }
                    
            }
            else if(num==100)
            {
                counterOf100++;
                //change = 50;
                if(counterOf50>0 && counterOf25>0)
                {
                    counterOf50--;
                    counterOf25--;
                    continue;
                }
                if(counterOf25>2)
                {
                    counterOf25-=3;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            
        }
        in.close();
//        System.out.println("100 is "+counterOf100);
  //      System.out.println("50 is "+counterOf50);
    //    System.out.println("25 is "+counterOf25);
        
        if(ok)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
        
        
        
    }
    
}
