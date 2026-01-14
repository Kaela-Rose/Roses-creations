//Mikaela-Rose Porter
// Addition program that inputs four numbers then displays their sum and product.

import java.util.Scanner;  // program uses class Scanner

public class Addition {
    // main method begins execution of Java application
    public static void main(String[] args) {

        // create a Scanner to obtain input from the command window 
        Scanner input = new Scanner(System.in);

        int number1; // first number
        int number2; // second number
        int number3; // third number
        int number4; // fourth number
        int sum;     // sum of four numbers
        int product; // product of four numbers

        // Prompt and read inputs
        System.out.print("Enter first integer: ");
        number1 = input.nextInt();

        System.out.print("Enter second integer: ");
        number2 = input.nextInt();

        System.out.print("Enter third integer: ");
        number3 = input.nextInt();

        System.out.print("Enter fourth integer: ");
        number4 = input.nextInt();

        // Perform calculations
        sum = number1 + number2 + number3 + number4;
        product = number1 * number2 * number3 * number4;

        // Display results
        System.out.printf("Sum is %d%n", sum);
        System.out.printf("Product is %d%n", product);

        input.close(); // close the scanner
    } // end method main
} // end class Addition
