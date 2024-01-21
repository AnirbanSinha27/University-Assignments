class Encapsulation{
    private int value;

    public void setValue(int x){
        x=value;
    }

    public int getValue(){
        return value;
    }
}

class EncapsulationDemo{
    public static void main(String args[]){
        Encapsulation a=new Encapsulation();
        a.setValue(10);
        System.out.println("The value of a is "+a.getValue());
    }
}