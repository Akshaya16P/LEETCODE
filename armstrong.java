import java.util.*;

public class armstrong {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        int original = n;
        int sum = 0;

        while (n > 0) {

            int digit = n % 10;              // Get the last digit
            sum = sum + (digit * digit * digit); // Add the cube of the digit
            n = n / 10;                      // Remove the last digit
        }

        if (sum == original) {
            System.out.println(original + " is an Armstrong Number");
        } else {
            System.out.println(original + " is Not an Armstrong Number");
        }

        sc.close();
    }
}