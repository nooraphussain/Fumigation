public class SampleThread2 implements Runnable{

    public void run() {

       for(int i=1; i<=10; i++){
           System.out.println("Thread count "+i);
           try {
               Thread.sleep(500);
           } catch (InterruptedException e) {
               e.printStackTrace();
           }
       }
    }
}

//ThreadCall2