class MyThread3 implements Runnable{
    @Override
    public void run() {
        int i=0;
        while(i<4000) {
            System.out.println("Hi I am in thread 3");
            i++;
        }
    }
}

class MyThread4 implements Runnable{
    @Override
    public void run() {
        int i=0;
        while(i<4000) {
            System.out.println("Hi I am in thread 4");
            i++;
        }
    }
}

public class ThreadUsingRunnable {
    public static void main(String[] args) {
        MyThread3 t3=new MyThread3();
        Thread t1=new Thread(t3);
        MyThread4 t4=new MyThread4();
        Thread t2=new Thread(t4);

        t1.start();
        t2.start();
    }
}
