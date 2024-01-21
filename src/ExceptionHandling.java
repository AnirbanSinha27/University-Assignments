import java.util.Scanner;

public class ExceptionHandling {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int [] arr=new int[5];
        int index,number;

        System.out.println("Enter five elements into the array one by one");
        for(int i=0;i<5;i++){
            arr[i]=sc.nextInt();
        }

        System.out.println("Enter the index");
        index=sc.nextInt();
        System.out.println("Enter the number");
        number=sc.nextInt();

        try{
            System.out.println("The quotient of the number present in index "+index+"by the number "+number+"is: "+
            arr[index]/number);
            System.out.println("The program has ended successfully without any exception!");
        }
        catch(ArithmeticException e){
            System.out.println("Sorry this was an arithmetic exception...");
        }
        catch (ArrayIndexOutOfBoundsException e){
            System.out.println("Sorry the index was out of bound of the array...");
        }
        catch(Exception e){
            System.out.println("Some other exception occurred...");
        }

        System.out.println("The program has ended successfully!");
    }
}
