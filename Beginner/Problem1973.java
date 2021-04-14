import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        long nonStolenSheep = 0;

        Scanner scanner = new Scanner(System.in);
        int stars = scanner.nextInt();
        int[] farms = new int[stars];
        boolean[] stolenFarms = new boolean[stars];

        for (int i = 0; i < stars; i++) {
            farms[i] = scanner.nextInt();
            nonStolenSheep += farms[i];
        }

        int step;
        int stolen = 0;
        for (int currentFarm = 0; currentFarm >= 0 && currentFarm < stars; ) {
            step = (farms[currentFarm] % 2 == 0) ? -1 : 1;

            if (farms[currentFarm] > 0) {
                farms[currentFarm]--;
                nonStolenSheep--;
                if(!stolenFarms[currentFarm]){
                    stolenFarms[currentFarm] = true;
                    stolen++;
                }
            }

            currentFarm += step;
        }

        System.out.println(stolen + " " + nonStolenSheep);
    }
}
