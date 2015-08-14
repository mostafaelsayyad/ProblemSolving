/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_641;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_641 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        
        int Q[] = new int[5];
        int P[] = new int[5];
        
        for(int i=0;i<5;i++)
        {
            Q[i] = in.nextInt();
        }
        for(int i=0;i<5;i++)
        {
            P[i] = in.nextInt();
        }
        
        
        int Qsum = 0;
        int Psum = 0;
        
        ArrayList<Integer> Qdays = new ArrayList<Integer>();
        ArrayList<Integer> Pdays = new ArrayList<Integer>();
        
        for(int i =0;i<Q.length;i++)
        {
            Qsum +=Q[i];
            Psum +=P[i];
            if(Qsum >= T)
            {
                Qdays.add(i);
                Qsum = Qsum - T;
            }
            
            if(Psum >= T)
            {
                Pdays.add(i);
                Psum = Psum - T;
            }
        }
        
        
        int size = 0;
        if(Qdays.size()>Pdays.size())
            size=Qdays.size();
        else
            size = Pdays.size();
        
        int count = 0;
        for(int i=0;i<Pdays.size();i++)
        {
            if(Qdays.contains(Pdays.get(i)))
            {
                count++;
            }
        }
        
        System.out.println("count is "+count);
        
    }
    
}

