/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package codeforces_georgeandaccomadation;

import java.util.Scanner;

/**
 *
 * @author Family
 */
public class CodeForces_GeorgeAndAccomadation {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt();
        
        int numberOfFreeRooms = 0;
        
        int people,room;
        
        for(int i=0;i<n;i++)
        {
            people = in.nextInt();
            room = in.nextInt();
            
            if((people+2)<=room)
            {
                numberOfFreeRooms++;
            }
        }
        
        System.out.println(numberOfFreeRooms);
    }
    
}
