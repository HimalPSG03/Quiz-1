import java.util.Scanner;

public class Avg_of_floating {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first floating-point number: ");
        double num1 = sc.nextDouble();
        System.out.print("Enter the second floating-point number: ");
        double num2 = sc.nextDouble();
        double average = (num1 + num2) / 2;
        System.out.printf("The average of %.2f and %.2f is: %.2f%n", num1, num2, average);
    }
}
