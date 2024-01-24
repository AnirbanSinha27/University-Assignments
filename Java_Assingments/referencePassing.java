class NumberWrapper {
    int value;

    // Constructor
    public NumberWrapper(int value) {
        this.value = value;
    }
}

class SwapNumbers {

    // Method to swap two numbers using pass-by-reference
    public static void swapNumbers(NumberWrapper num1, NumberWrapper num2) {
        int temp = num1.value;
        num1.value = num2.value;
        num2.value = temp;
    }

    public static void main(String[] args) {
        // Create NumberWrapper objects
        NumberWrapper num1 = new NumberWrapper(5);
        NumberWrapper num2 = new NumberWrapper(10);

        // Display the numbers before swapping
        System.out.println("Before swapping:");
        System.out.println("num1: " + num1.value);
        System.out.println("num2: " + num2.value);

        // Call the swapNumbers method to swap the numbers
        swapNumbers(num1, num2);

        // Display the numbers after swapping
        System.out.println("\nAfter swapping:");
        System.out.println("num1: " + num1.value);
        System.out.println("num2: " + num2.value);
    }
}
