import java.util.Scanner;
class Big{
	public static void main(String args[]){
		Scanner s=new Scanner(System.in);
		int a=s.nextInt();
		int b=s.nextInt();
		int c=s.nextInt();
		if(a>b && a>c){
			System.out.println("a is bigger"+a);
		}
		else if(b>c){
			System.out.println("b is bigger"+b);
			}
		else{
			System.out.println("c is bigger"+c);
			
			}
		
	}
}
