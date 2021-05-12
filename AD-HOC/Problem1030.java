import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        var scan = new Scanner(System.in);
        var testCases = scan.nextInt();

        for (var index = 1; index <= testCases; index++) {
            var peopleInCircle = scan.nextInt();
            var salt = scan.nextInt();

            System.out.printf("Case %d: %d%n", index, josephus(peopleInCircle, salt));
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