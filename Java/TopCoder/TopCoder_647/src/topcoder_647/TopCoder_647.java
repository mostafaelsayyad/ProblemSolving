/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_647;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_647 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        List<Integer> x = new ArrayList<Integer>();
        List<Integer> save = new ArrayList<Integer>();
        
        for(int i=0;i<n;i++)
        {
            x.add(in.nextInt());
        }
        
        Collections.sort(x);
        
        int count = 0;
        for(int i=0;i<x.size()-1;i++)
        {
            if(x.get(i)==x.get(i+1) && i==x.size()-2)
            {
                save.add(count);
                break;
            }
                
            if(x.get(i)==x.get(i+1) )
            {
                count++;
            }
            else
            {
                count++;
                System.out.println("conut is "+count);
                save.add(count);
                count=0;
            }
        }
        
        
        
        Collections.sort(save);
        
        for(int i=0;i<x.size()-1;i++)
        {
            if(x.length%2==0)
            {
                if(save.get(i)>)
            }
        }
        
        
    }
    
}
