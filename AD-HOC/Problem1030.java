import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        var scan = new Scanner(System.in);
        var testCases = scan.nextInt();

        for (var i = 1; i <= testCases; i++) {
            System.out.printf(
                    "Case %d: %d%n",
                    i,
                    josephus(scan.nextInt(), scan.nextInt())
            );
        }

        scan.close();
    }

    private static int josephus(int n, int k) {
        var result = 0;

        for (var i = 1; i <= n; ++i)
            result = (result + k) % i;

        return result + 1;
    }
}
