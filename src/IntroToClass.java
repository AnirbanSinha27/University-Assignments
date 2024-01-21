class Box{
    int length;
    int width;
    int height;
}

class BoxDemo{
    public static void main(String args[]){
        Box myBox=new Box();
        myBox.height=10;
        myBox.width=20;
        myBox.length=5;
        double volume= myBox.length* myBox.width* myBox.height;

        System.out.println("The volume of the box is "+volume);
    }
}
