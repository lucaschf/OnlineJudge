import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        var scan = new Scanner(System.in);

        var tabs = scan.nextInt();
        var actions = scan.nextInt();

        for (var i = 0; i < actions; i++) {
            tabs += scan.next().equals("clicou") ? -1 : 1;
        }

        System.out.println(tabs);

        scan.close();
    }
}