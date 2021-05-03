import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        var scan = new Scanner(System.in);
        var currentCase = 1;

        while (scan.hasNext()) {
            var lasElement = scan.nextInt();

            var sequence = new StringBuilder("0");
            var size = 1;

            for (var i = 1; i <= lasElement; i++) {
                for (var j = 0; j < i; j++)
                    sequence.append(" ").append(i);

                size += i;
            }

            System.out.printf("Caso %d: %d numero%s%n",
                    currentCase,
                    size,
                    size > 1 ? "s" : "");

            System.out.println(sequence + "\n");
            currentCase++;
        }

        scan.close();
    }
}