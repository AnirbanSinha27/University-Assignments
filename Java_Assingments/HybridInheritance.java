class Student{
    int rollNo=1;
    String Name="Anirban";
}

class TheoryExam extends Student{
    int thMarks=75;
}

interface PracticalExam{
    int pracMarks=80;
    void display();
}

class Result extends TheoryExam implements PracticalExam{
    int totalMarks=thMarks+pracMarks;
    public void display(){
        System.out.println("The name of the student is: "+Name);
        System.out.println("The roll number of the student is: "+rollNo);
        System.out.println("The total marks obtained by "+Name+" is: "+totalMarks);
    }
}

public class HybridInheritance {
    public static void main(String[] args) {
        Result obj=new Result();
        obj.display();
    }
}
