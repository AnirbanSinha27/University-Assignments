class CellPhone{
    void greet(){
        System.out.println("Hi I am a Cell Phone");
    }

    void call(int n){
        System.out.println("Calling number "+n);
    }

    void pickCall(){
        System.out.println("Picking up call..");
    }
}


interface Wifi{
    String[] network={"Anirban","Idgaf","Idgaf5G"};
    String[] showNetwork();
}


interface Camera{
    void takeSnap();
}


class SmartPhone extends CellPhone implements Wifi,Camera{
    public String[] showNetwork(){
        return Wifi.network;
    }
    public void takeSnap(){
        System.out.println("Taking a snap");
    }
}


public class Interface {
    public static void main(String[] args) {
        SmartPhone sm=new SmartPhone();
        String[] ans=sm.showNetwork();
        for (int i=0;i<ans.length;i++) System.out.println(ans[i]);
        sm.takeSnap();
        sm.call(101);
        sm.pickCall();
        sm.greet();
    }
}
