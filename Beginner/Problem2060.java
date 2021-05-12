import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        var scan = new Scanner(System.in);

        int[][] multiple = {
                {2, 0},
                {3, 0},
                {4, 0},
                {5, 0}
        };

        var count = scan.nextInt();

        for (var i = 0; i < count; i++) {
            var value = scan.nextInt();

            for (var j = 0; j < 4; j++) {
                if (value % multiple[j][0] == 0)
                    multiple[j][1]++;
            }
        }

        for (var i = 0; i < 4; i++)
            System.out.printf("%d Multiplo(s) de %d%n", multiple[i][1], multiple[i][0]);

        scan.close();
    }
}