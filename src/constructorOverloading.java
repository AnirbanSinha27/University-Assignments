class Employee{
    int id;
    String name;

    Employee(){
        id=19;
        name="Anirban";
    }

    Employee(String n){
        name=n;
    }

    Employee(int x){
        id=x;
    }

}

class EmployeeDemo{
    public static void main(String args[]){
        Employee ob1=new Employee();
        System.out.println("Name is "+ob1.name+" and age is "+ob1.id);
        Employee ob2=new Employee("Anirban");
        System.out.println("Name is "+ob2.name);
        Employee ob3=new Employee(19);
        System.out.println("Age is "+ob1.id);
    }
}
