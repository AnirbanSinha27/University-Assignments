class box{
    int width;
    int length;
    int height;

    box(int l,int w,int h){
        length=l;
        width=w;
        height=h;
    }

    public int volume(){
        return length*width*height;
    }

}

class boxDemo2{
    public static void main(String[] args){
        box rectangle=new box(10,20,30);
        System.out.println("The volume of the box is: "+rectangle.volume());
    }
}