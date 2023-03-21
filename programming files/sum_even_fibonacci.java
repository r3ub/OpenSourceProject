public class sum_even_fibonacci {
    public static void main(String[] args) {
        // initialize variables
        int a = 0, b = 1;
        int sumEven = 0;
      
        while (b < 4000000) {
            // determine if b is even
            if (b % 2 == 0) {
                // add b to sum if even
                sumEven += b;
            }
            // update values of a and b
            int temp = b;
            b = a + b;
            a = temp;
        }
        // display sum of even values
        System.out.println(sumEven);
    }
}

// answer should be 4613732
