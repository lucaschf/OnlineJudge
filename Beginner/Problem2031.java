import java.util.Arrays;
import java.util.Collections;
import java.util.Map;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        var scan = new Scanner(System.in);

        var choices = Map.ofEntries(
                Map.entry("pedra", Collections.singletonList("papel")),
                Map.entry("ataque", Arrays.asList("pedra", "papel")),
                Map.entry("papel", Collections.emptyList())
        );

        var cases = scan.nextInt();

        for (var i = 0; i < cases; i++) {
            var player = scan.next();
            var anotherPlayer = scan.next();

            if (player.equals(anotherPlayer)) {
                switch (player) {
                    case "pedra" -> System.out.println("Sem ganhador");
                    case "papel" -> System.out.println("Ambos venceram");
                    default -> System.out.println("Aniquilacao mutua");
                }

                continue;
            }

            int winner = choices.get(player).contains(anotherPlayer) ? 1 : 2;
            System.out.printf("Jogador %d venceu%n", winner);
        }

        scan.close();
    }
}