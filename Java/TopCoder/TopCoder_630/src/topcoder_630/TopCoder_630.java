/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_630;

/**
 *
 * @author Family
 */
public class TopCoder_630 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        String S = "aabccb";
        
        Boolean change = true;
        while(change)
        {
            change = false;
            
            for(int i=0;i<S.length()-1;i++)
            {
                if(S.charAt(i)==S.charAt(i+1))
                {
                    StringBuilder sb = new StringBuilder(S);
                    sb.deleteCharAt(i);
                    sb.deleteCharAt(i);
                    String resultString = sb.toString();
                    S = resultString;
                    change = true;
                    break;
                }
            }
            
        }
if(S.isEmpty())
{
        System.out.println("s is "+S);
}
else
    System.out.println("Q"+S+"Q");
    
    }
    
}
