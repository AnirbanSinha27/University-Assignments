class A{
    public int a;

    void meth1(){
        System.out.println("Hi I am method 1 of class A");
    }
}

class B extends A{
    @Override
    void meth1(){
        System.out.println("Hi I am method 1 of class B");
    }
}

public class MethodOverriding {
    public static void main(String[] args) {
        A a=new A();
        B b=new B();
        a.meth1();
        b.meth1();
    }
}
