/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_639;

/**
 *
 * @author Family
 */
public class TopCoder_639 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int need_first = st1,need_second = st2;
        for(int time = 1;time<1000;time++)
        {
            if(need_first==need_second)
                    return "Difficult";
            
            if(need_first==time && t1>1)
            {
                need_first+=p1;
                t1--;
            }
            
            if(need_second==time && t2>1)
            {
                need_second+=p2;
                t2--;
            }
            
        }
        
        return "Easy";
            
        
        
    }
    
}
