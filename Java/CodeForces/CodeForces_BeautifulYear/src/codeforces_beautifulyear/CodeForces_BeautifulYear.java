/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package codeforces_beautifulyear;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class CodeForces_BeautifulYear {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int year = in.nextInt();
        
        
        
        while(true)
        {
            Boolean repeated = false;
            String str = Integer.toString(year);
            System.out.println("year is "+year);

            for(int i=0;i<str.length();i++)
            {
                for(int j=i+1;j<str.length()-1;j++)
                {
                    if(str.charAt(i)==str.charAt(j))
                    {
                        //System.out.println("noooooo");
                        repeated = true;
                        break;
                    }
                }
                if(repeated)
                    break;
            }

       
        if(repeated)
            year++;
        else
        {
            System.out.println("year is "+year);
            break;
        }
        
        //System.out.println("year is "+year);
        
    }
}
    
}
