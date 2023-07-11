/**
 * Version: 1.0
 * Author: 张江寒Zhang
 * Creation Date: 2023-07-11
 * Update Date: 2023-07-11
 * Description: 运算符等
 * Update Log:
 *   - Update the code
 **/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a = 30;
        double b = 60.0;
        System.out.println(a + b);

        int am = 30;
        double bm = (int)30;
        System.out.println(bm);

//        Scanner sc = new Scanner(System.in);
//
//        int numa = sc.nextInt();
//        int numb = sc.nextInt();
//
//        System.out.println(numa + numb);

        /* 字符串中的+号 */
        System.out.println("你好," + "李华." + "学号," + 30332021);

    }
}