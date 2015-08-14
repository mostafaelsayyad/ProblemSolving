/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_628;

/**
 *
 * @author Family
 */
public class TopCoder_628 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int a,b,c,d;
        
        
        int area1 = a*b;
        int area2 = c*d;
        
        float res = area2/area1;
        res/=4;
        if(res>0)
            return 1;
        else
            return 0;
        
        
    }
    
}
