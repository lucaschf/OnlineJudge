import java.util.Scanner;

public class Main {

     public static void main(String[] args) {

        var scanner = new Scanner(System.in);
        var students = scanner.nextInt();

        var best = new Student();
        Student aux;

        for (var i = 0; i < students; i++) {
            aux = new Student(scanner.nextInt(), scanner.nextDouble());

            if (aux.grade > best.grade)
                best = aux;
        }

        if (best.grade < 8)
            System.out.println("Minimum note not reached");
        else
            System.out.println(best.enrollment);
    }


    static class Student {
        int enrollment;
        double grade;

        public Student() {
            grade = 0;
        }

        public Student(int enrollment, double grade) {
            this.enrollment = enrollment;
            this.grade = grade;
        }
    }
}