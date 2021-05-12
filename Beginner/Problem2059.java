import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        var scan = new Scanner(System.in);

        var playerOneChoseEven = scan.nextInt() == 1;
        var result = scan.nextInt() + scan.nextInt();
        var cheated = scan.nextInt() == 1;
        var accused = scan.nextInt() == 1;

        int winner;

        if (cheated) {
            winner = accused ? 2 : 1;
        } else {
            if (result % 2 == 0) {
                winner = playerOneChoseEven ? 1 : 2;
            } else
                winner = playerOneChoseEven ? 2 : 1;
        }

        System.out.printf("Jogador %d ganha!%n", winner);

        scan.close();
    }
}