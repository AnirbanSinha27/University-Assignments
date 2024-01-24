import java.util.Scanner;

class NegativeRadiusException extends Exception{
    @Override
    public String getMessage(){
        return ("Negative Radius Exception");
    }
}

public class ThrowAndThrows {

    public static double getArea(double r) throws NegativeRadiusException{
        if(r<0)
            throw new NegativeRadiusException();
        double result=Math.PI*r*r;
        return r;
    }

    public static void main(String[] args) {
        double a;
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the radius");
        a=sc.nextDouble();

        try{
            double result;
            result =getArea(a);
            System.out.println("The area is "+result);
        }
        catch (NegativeRadiusException e){
            System.out.println(e);
        }

    }
}
