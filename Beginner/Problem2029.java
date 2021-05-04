import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        var scan = new Scanner(System.in);
        var pi = 3.14;

        while (scan.hasNext()) {
            var volume = scan.nextDouble();
            var diameter = scan.nextDouble();
            var radius = diameter / 2;
            var height = volume / (pi * Math.pow(radius, 2));
            var area = pi * Math.pow(radius, 2);

            System.out.printf("ALTURA = %1.2f%nAREA = %1.2f%n", height, area);
        }


        scan.close();
    }
}