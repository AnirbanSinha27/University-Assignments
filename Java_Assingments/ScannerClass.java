import java.security.SecureRandom;
import java.util.Scanner;

class Input{
    int age;
    String name;

    void getValue(){
        System.out.println("The age is "+age);
        System.out.println("The name is "+name);
    }

}

class InputDemo{
    public static void main(String args[]){
        Input ob1=new Input();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the age of ob1");
        ob1.age=sc.nextInt();
        System.out.println("Enter the name of ob1");
        ob1.name=sc.next();


        ob1.getValue();
        sc.close();
    }
}