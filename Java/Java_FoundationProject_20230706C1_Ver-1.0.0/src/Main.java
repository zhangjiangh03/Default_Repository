import java.util.Scanner;

public class Main {
    /*
    * public：这是一个访问修饰符，表示该类是公开的，可以从其他类或包中进行访问。
    * class：这是关键字，用于声明一个类。
    * Main：这是类的名称，遵循Java命名规范，类名通常以大写字母开头。
    *
    *  class 关键字用于定义类，类是 java 的基本单元
    */
    public static void main(String[] args) {
        /*
        * public：这是一个访问修饰符，表示该方法是公开的，可以从其他类或包中进行访问。
        * static：这是一个关键字，表示该方法是静态方法，可以直接通过类名来调用，不需要实例化对象。
        * void：这是方法的返回类型，表示该方法不返回任何值。
        * main：这是方法的名称，它是一个约定俗成的名称，表示程序的入口点。
        * String[] args：这是 main 方法的参数列表，它是一个字符串数组。args 是一个约定俗成的名称，用于接收命令行传入的参数。
        */
        System.out.println("你好");
        System.out.println(3.2);


        int test = 60;
        System.out.println(test);

        for (int i = 1; i <= 5; i++) {
            System.out.println("i = " + i);
        }

        // 创建对象
        Scanner sc = new Scanner(System.in);
        // 接受数据
        int i = sc.nextInt();
        // 输出数据
        System.out.println(i);

    }
}