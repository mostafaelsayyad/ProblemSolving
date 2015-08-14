/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_621;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_621 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        String str[] = new String [4];
       
        Boolean ok1 = true;
        Boolean ok2 = true;
        
        int size = str.length;
        
        
        String save[] = new String[4];
        String Original[] = new String[4] ;
        
        //int zz[] = new int [2];
        
        for(int i=0;i<size;i++)
        {
            str[i] = in.next();
            Original[i]=str[i];
            save[i] = str[i];
        }
        
        
        //////////////////////////   By length  /////////////////////////////////////////
for(int i=0;i<save.length;i++)
{
    for(int j=i;j<save.length;j++)
    {
        int size1 = save[i].length();
        int size2 = save[j].length();
        
         if(size1>size2)
         {
            String temp = save[i];
            save[i]=save[i+1];
            save[i+1]=temp;
         }
            
    }

}
        
        for(int i=0;i<save.length;i++)
        {
            if(save[i]!=Original[i])
            {
                ok2 = false;
            }
        }
     //////////////////////////////////////////////////   
        
        for(int i=0;i<Original.length;i++)
        {
            System.out.println("sssssss is "+Original[i]);
        }
        
        
        Arrays.sort(str);
        //{{"c", "bb", "aaa"}}
        for(int i=0;i<Original.length; i++)
        {
               // System.out.println("str is "+str[i]);
               // System.out.println("Original is "+Original[i]);
            
            if(Original[i]!=str[i])
            {
                ok1 = false;
                break;
            }
        }
        

        if(ok1 && !ok2)
        {
            System.out.println("lexico");
        }
        else if(ok2 && !ok1)
        {
            System.out.println("len");
        }
        else if(ok1 && ok2)
        {
            System.out.println("both");
        }
        else
        {
            System.out.println("none");
        }
    }
    
}
