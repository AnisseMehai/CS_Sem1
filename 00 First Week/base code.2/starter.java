import java.util.Scanner;
class starter {
	public static void main(String args[]) {
		Scanner sc= new Scanner(System.in);
		
		System.out.println("input a number");
		int x = sc.nextInt();
		
		
		int y = x;
		int c = x;
		
		int count= 1;

		while(true){
			y = y*count;
	
			if(count == (x-1))
			break;
			
			count = count +1;
			
		}
		//System.out.println(y);
	System.out.println(y);
	}

}	


