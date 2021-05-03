import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        var scan = new Scanner(System.in);

        var tea = scan.nextInt();
        var participants = 5;
        var correctGuesses = 0;

        for (var i = 0; i < participants; i++) {
            if (tea == scan.nextInt())
                correctGuesses++;
        }

        System.out.println(correctGuesses);
        scan.close();
    }
}