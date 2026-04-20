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
// 		System.out.println("Hello World");
Scanner scn=new Scanner(System.in);
int n=scn.nextInt();
int sp=n/2;
int st=1;
int val=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=sp;j++){
        System.out.print("\t");
    }
    int cval=val;
    for(int j=1;j<=st;j++){
        System.out.print(cval+"\t");
        if(j<=st/2){
            cval++;
        }
        else{
            cval--;
        }
        // cval++;
    }
    if(i<=n/2){
        sp--;
        st+=2;
        val++;
    }
    else{
        sp++;
        st-=2;
        val--;
    }
    
    
    System.out.println();
}
	}
}
