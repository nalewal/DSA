/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scn = new Scanner(System.in);
	    int t = scn.nextInt();
	    for(int i=0;i<t;i++){
	        int n = scn.nextInt();
	        int count=0;
	        for(int div=2;div*div<=n;div++){
	            if(n%div==0){
	                count++;
	                break;
	            }
	        }
	        if(count==0){
	            System.out.println("prime");
	        }
	        else{
	            System.out.println("not prime");
	        }
	    }
	    
// 		System.out.println("Hello World");
	}
}
