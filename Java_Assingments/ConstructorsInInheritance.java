class Base{
    Base(){
        System.out.println("Hi I am base class Constructor");
    }
    Base(int x){
        System.out.println("Hi I am base class constructor with value of x as "+x);
    }
}

class Derived extends Base{
    Derived(){
        System.out.println("Hi I am derived class constructor");
    }
    Derived(int x,int y){
        super(5);
        System.out.println("Hi I am derived class constructor with value of y as "+y);
    }
}

class ChildFromDerived extends Derived{
    ChildFromDerived(){
        System.out.println("Hi I am Child class constructor");
    }
}

public class ConstructorsInInheritance {
    public static void main(String args[]){
        Derived d=new Derived(5,6);
    }
}
