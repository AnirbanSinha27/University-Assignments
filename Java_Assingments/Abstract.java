abstract class Parent{
    abstract void greet();
}

class Child1 extends Parent{
    void greet(){
        System.out.println("Hi I am child1 of Parent");
    }
}

abstract class Child2 extends Parent{
   //Either I need to include greet method or declare this class as abstract
}

public class Abstract {
    public static void main(String[] args) {
        //Parent p=new Parent(); not possible
        Child1 c1=new Child1();
        c1.greet();
        //Child2 c2=new Child2(); not possible
    }
}
