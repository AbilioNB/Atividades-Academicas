public class Main {

    public static void main(String[] args) {

            int[] myVetor= new int [6];

            myVetor[0]=10;
            myVetor[1]=5;
            myVetor[2]=12;
            myVetor[3]=10;
            myVetor[4]=20;
            myVetor[5]=20;
            int resp;

            resp=calc(myVetor);
            System.out.print(resp);
    }
    public static int calc(int[] myVetor){

        int resp=6,dif=0;


        for (int ct=0;ct<6;ct++){

            for (int ct2=ct+1;ct2<6;ct2++){
                if(myVetor[ct]==myVetor[ct2]){
                   dif++;
                    break;
                }
            }

        }
        return  resp-dif;
    }
}
