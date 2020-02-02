public class Main {

    public static void main(String[] args) {

            int[] myVetor= new int [4];

            myVetor[0]=10;
            myVetor[1]=5;
            myVetor[2]=12;
            myVetor[3]=20;

            calc(myVetor);
    }
    public static void calc(int[] myVetor){

        int soma=0;

        for (int ct=0;ct<4;ct++){
            soma=soma+myVetor[ct];
        }
        System.out.print("Resultado da soma= "+soma);

    }
}
