/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_648;

import static java.lang.Math.pow;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_648 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        //2^n * K = T
        //res = T/k
        //2^x = res = x^n
        //x??
          
        Scanner in =new Scanner(System.in);
        int K = in.nextInt();
        int T = in.nextInt();
  
     
        int sum = 0;
        int res=0;
        int numberOfApples=0;
        
        for(int i=0;i<50;i++)
        {
            res = (int) (pow(2,i))*K;
            sum+=res;
            System.out.println("res is "+res);
            System.out.println("sum is "+sum);
            numberOfApples++;
            if(sum == T)
                break;
        }
    System.out.println("num is "+numberOfApples);
        
    }
    
}
