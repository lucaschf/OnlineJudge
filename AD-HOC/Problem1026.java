import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        var scan = new Scanner(System.in);

        while (scan.hasNext()){
            var n = scan.nextLong();
            var n2 = scan.nextLong();

            System.out.println(n ^ n2);
        }

        scan.close();
    }
}