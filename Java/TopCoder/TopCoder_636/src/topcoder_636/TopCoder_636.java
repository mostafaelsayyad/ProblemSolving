/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package topcoder_636;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author Family
 */
public class TopCoder_636 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
  /*      sort
if(even & odd|| single number || 2 numbers not equal )return -1;
//5,7,9,15
goal is 7 (average)
diff = 5-7=-2
diff = 9-7 = 2;
....
sum of all difference must be = 0;
*/
    /*
        Scanner in = new Scanner(System.in);
        int []stones = new int[4];
        
        for(int i=0;i<4;i++)
        {
            stones[i] = in.nextInt();
        }
        
        
        
        int count2=0;
        for(int i=0;i<stones.length-1;i++)
        {
            if(stones[i]==stones[i+1])
            {
                count2++;
            }
        }
        if(count2==stones.length-1)
        {
            //return 0;
        }
        
        if(stones.length==1 || (stones.length==2) && stones[0]!=stones[1])
        {
            //return -1;
            System.out.println("negative 1");
        }
        
        Arrays.sort(stones);
        
        int diff = 0;
        int target = 0;
        
        
        for(int i=0;i<stones.length;i++)
        {
            ArrayList<Integer>saveDiff = new ArrayList<Integer>();
            target = stones[i];
            int sum = 0;
            int actions = 0;
            for(int j=0;j<stones.length;j++)
            {
                    sum+=(stones[j]-target);
                    
                    if(stones[i]-target>0)
                        actions+=(stones[i]-target);
                    else
                        actions+=(target-stones[j]);
                    
            }
            
            if(sum==0)
            {
                //System.out.println("my sum is "+stones.length - 1);
                System.out.println("actions is "+actions);
            }
                
            
        }
        */
        /*
        float sum = 0;
        for(int i=0;i<stones.length;i++)
            sum+=stones[i];
        
        float level = sum/(float)stones.length;
        
        
        if(level-(int)level !=0)return -1;
        
        int ans = 0;
        
        for(int i=0;i<stones.length;i++)
        {
            int x = stones[i]-(int)level'
            if(x%2!=0)return -1;
            
            if(x>0)
                ans=ans+x;
        }
        
        if(ans%2!=0)return -1;
        
        return ans/2;*/
        
        
    }
    
}
