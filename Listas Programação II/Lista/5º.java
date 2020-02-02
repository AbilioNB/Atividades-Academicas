public class Main {

    public static void main(String[] args) {

     int valor1=50,valor2=150,valor3=20,maior;

    maior=comper(valor1,valor2,valor3);

     System.out.print("O maior é = "+maior);



    }
    public static int comper(int valor1,int valor2,int valor3){

        int maior=0;

        if (valor1>valor2&&valor1>valor3){
            maior=valor1;
        }else if (valor2>valor1&&valor2>valor3){
            maior=valor2;

        }else {
            maior = valor3;
        }
        return maior ;
    }
}
