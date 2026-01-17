import java.util.Scanner;

public class Main {
    //for문1: 명령어 수 및 명령어 번호 입력 -> for문2: switch-case문으로 각 명령어 번호 쳐내기 => 기각
    //각 명령 별로 함수 작성, for문으로 명령어 쳐내면서 + 조건문으로 추가 정수 입력
    //근데 자바에서 제공하는 함수가 있음! => 숙지 필요

    private int[] stack;
    private int top;

    public Main(int size) {
        stack = new int[size];
        top = -1;
    }

    public void push(int a) {
        stack[++top] = a;
    }

    public int pop() {
        if (top == -1) return -1;
        return stack[top--];
    }

    public int number() { // size
        return top + 1;
    }

    public int is_empty() {
        return (top == -1) ? 1 : 0;
    }

    public int print_top() {
        if (top == -1) return -1;
        return stack[top];
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        Main st = new Main(N);
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < N; i++) {
            int cmd = sc.nextInt();

            switch (cmd) {
                case 1: {
                    int x = sc.nextInt();
                    st.push(x);
                    break;
                }
                case 2: {
                    sb.append(st.pop()).append('\n');
                    break;
                }
                case 3: {
                    sb.append(st.number()).append('\n');
                    break;
                }
                case 4: {
                    sb.append(st.is_empty()).append('\n');
                    break;
                }
                case 5: {
                    sb.append(st.print_top()).append('\n');
                    break;
                }
            }
        }

        System.out.print(sb.toString());
        sc.close();
    }
}
