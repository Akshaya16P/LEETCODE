import java.util.Scanner;

public class example {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int sum = 0;

        while (true) {
            int a = sc.nextInt();

            if (a == 0) {
                break;
            }

            sum = sum + a;
        }

        System.out.println("Sum = " + sum);

        sc.close();
    }
}