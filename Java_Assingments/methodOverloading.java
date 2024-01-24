class methodOverloading{
    void foo(){
        System.out.println("Hello");
    }
    void foo(String x){
        System.out.println("Hello "+x);
    }

    void foo(String x,int a){
        System.out.println("Hello "+x+" age "+a);
    }
}

class methodDemo{
    public static void main(String args[]){
        methodOverloading obj=new methodOverloading();
        obj.foo();
        obj.foo("Anirban");
        obj.foo("Anirban",19);
    }
}