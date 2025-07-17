import java.util.Scanner;
class EvenOdd{
	public static void main(String args[]){
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		if(n%2==0){
		System.out.println("even number"+n);
		}
		else{
			System.out.println("odd number"+n);
		}
	}
}
