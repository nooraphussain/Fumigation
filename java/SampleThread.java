public class SampleThread extends Thread{

     @Override
     public void run() {

        super.run();

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

//ThreadCall