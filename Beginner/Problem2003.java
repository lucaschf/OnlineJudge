import java.time.LocalTime;
import java.time.temporal.ChronoUnit;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        var scan = new Scanner(System.in);
        var meetingTime = LocalTime.of(8, 0);

        while (scan.hasNext()) {
            var strArrival = scan.next().split(":");
            var arrival = LocalTime.of(Integer.parseInt(strArrival[0]), Integer.parseInt(strArrival[1])).plusMinutes(60);
            System.out.printf("Atraso maximo: ");

            if (arrival.isAfter(meetingTime)) {
                System.out.println(meetingTime.until(arrival, ChronoUnit.MINUTES));
            } else
                System.out.println(0);
        }

        scan.close();
    }
}