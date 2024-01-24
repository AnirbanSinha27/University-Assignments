class Animal{
    String name;

    void setName(String n){
        this.name=n;
    }

    void getName(){
        System.out.println("My name is "+name);
    }
}

class Dog extends Animal{
    void speak(){
        System.out.println("I bark");
    }
}

class Inheritance{
    public static void main(String args[]){
        Dog d=new Dog();
        Animal a=new Animal();
        d.setName("Tom");
        d.getName();
        d.speak();
        a.setName("Marry");
        a.getName();
    }
}