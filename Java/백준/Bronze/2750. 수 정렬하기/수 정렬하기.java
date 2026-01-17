import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        //삽입정렬, insertion sort
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        int[] arr = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }

        int key, i, j = 0;
        for (i = 1; i < N; i++) {
            key = arr[i]; //항상 처음 값을 저장하는 변수가 필요함

            for (j = i-1; j>=0 && arr[j]>key ; j--) {
                arr[j+1] = arr[j]; //숫자가 크다면 뒤로 한 칸씩 이동하기
            }

            arr[j+1] = key;
        }

        for (int k = 0; k < N; k++) {
           System.out.println(arr[k]);
        }
    }
}
