import java.util.Scanner;

public class Main {
    //숫자 5개 입력 받음 -> 정렬 -> 평균 계산 및 중앙값 계산

    public static int insert_sort(int[] arr){
        for (int i = 1; i < 5; i++) {
            int key = arr[i];
            int j;
            for (j = i-1; j>=0 && arr[j]>key ; j--) {
                arr[j+1] = arr[j];
            }
            arr[j+1] = key;
        }
        return arr[2];
    }

    public static int average(int[] arr){
        int sum = 0;
        for (int k = 0; k < 5; k++) {
            sum += arr[k];
        }
        return sum/5;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] list = new int[5];

        for (int i = 0; i < 5; i++) {
            list[i] = sc.nextInt();
        }

        System.out.println(average(list));
        System.out.println(insert_sort(list));
        
    }
}
