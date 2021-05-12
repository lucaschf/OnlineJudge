import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        var scan = new Scanner(System.in);

        var departureTime = scan.nextInt();
        var tripDuration = scan.nextInt();
        var timezone = scan.nextInt();

        if(departureTime == 0)
            departureTime = 24;

        var arrival = departureTime + tripDuration;
        arrival += timezone;

        if(arrival >= 24)
            arrival-= 24;

        System.out.println(arrival);
        scan.close();
    }
}