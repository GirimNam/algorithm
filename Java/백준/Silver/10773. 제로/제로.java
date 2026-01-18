import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Stack<Integer> money = new Stack<>();
        int top = -1;
        int sum = 0;
        int N = sc.nextInt();

        for (int i = 0; i < N; i++) {
            int a = sc.nextInt();
            if (a==0) {
                money.pop();
                top--;
            }
            else {
                money.push(a);
                top++;
            }
        }

        for(int r:money){
            sum += r;
        }
        System.out.println(sum);
    }

}
