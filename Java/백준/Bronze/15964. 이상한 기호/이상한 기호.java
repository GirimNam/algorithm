import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        long result = (long)(Math.pow(a, 2)) - (long)(Math.pow(b, 2)) ;

        System.out.println(result);
    }
}

