import java.util.Scanner;

public class Happy_or_not {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        boolean isHappy = isHappyNumber(n);

        System.out.println(isHappy);

        sc.close();
    }

    public static boolean isHappyNumber(int n) {
        while (n != 1) {
            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            n = sum;
        }

        return n == 1;
    }
}
