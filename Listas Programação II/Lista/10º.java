public class Main {

    public static void main(String[] args) {

        int[] myVetor= new int [6];

        myVetor[0]=25;
        myVetor[1]=5;
        myVetor[2]=8;
        myVetor[3]=10;
        myVetor[4]=21;
        myVetor[5]=20;
        int soma=30;
        calc(myVetor,soma);
    }
    public static void calc(int[] myVetor,int vl){

        int soma=0;

        for (int ct=0;ct<6;ct++){

            for (int ct2=ct+1;ct2<6;ct2++){
                if(myVetor[ct]+myVetor[ct2]==vl){
                    System.out.print(myVetor[ct]+"+"+myVetor[ct2]+"="+vl+"\n");
                    break;
                }
            }

        }


    }
}
