import java.util.Map;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Map<Integer, Double> priceTable = Map.ofEntries(
                Map.entry(1001, 1.5),
                Map.entry(1002, 2.5),
                Map.entry(1003, 3.5),
                Map.entry(1004, 4.5),
                Map.entry(1005, 5.5)
        );

        var scan = new Scanner(System.in);
        var count = scan.nextInt();
        var total = .0;

        for (var i = 0; i < count; i++) {
            total += priceTable.get(scan.nextInt()) * scan.nextInt();
        }

        scan.close();

        System.out.printf("%1.2f%n", total);
    }
}