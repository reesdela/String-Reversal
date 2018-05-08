/*
 Author: Rees de la Houssaye
 Date: 5/7/2018
 Description: Simple program that takes an string input and outputs the reverse of the string
 */
import java.util.Scanner;

public class StringReverse
{

    public static void main(String[] args)
    {
        String reverse = "";
        Scanner scan = new Scanner(System.in);
        String toReverse = scan.nextLine();
        scan.close();
        
        for(int i = toReverse.length()-1; i >= 0; i--)
        {
            reverse += toReverse.charAt(i); //method that takes a index and returns char at said index
        }
        
        System.out.println(reverse);
    }
}
