import java.util.Scanner;
class Prime{
	public static void main(String args[]){
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int count=0;
		for(int i=1;i<=n;i++){
			if(n%i==0)
				count++;
		}
		if(count==2){
			System.out.println("prime number"+n);
		}
		else{
			System.out.println("not a prime number"+n);
		}
	}
}
