class Phone{
    void tellTime(){
        System.out.println("The time is 3am");
    }
    void greet(){
        System.out.println("Hi Phone user");
    }
}

class Smartphone extends Phone{
    void playMusic(){
        System.out.println("Playing music...");
    }
    @Override
    void greet(){
        System.out.println("Hi Smartphone user");
    }
}

public class DynamicMethodDispatch {
    public static void main(String[] args) {
        Phone obj=new Smartphone();
        // Smartphone obj1=new Phone(); Not Possible
        obj.greet();
        obj.tellTime();
        //obj.playMusic(); Not Allowed
    }
}
