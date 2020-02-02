public class Main {

    public static void main(String[] args) {

     int valor1=-50,valor2=1,valor3=20,maior;

     show_number(valor1,valor2,valor3);

    }
    public static void show_number(int valor1,int valor2,int valor3){

        int primeiro,segundo,terceiro;

       if (valor1>valor2&&valor1>valor3){
            primeiro=valor1;
            if (valor2>valor3){
                segundo=valor2;
                terceiro=valor3;
            }
            segundo=valor3;
            terceiro=valor2;
        }else if (valor2>valor3&&valor2>valor1) {
            primeiro = valor2;
            if (valor1 > valor3){
                segundo = valor1;
                terceiro = valor3;
            }else {
                segundo = valor3;
                terceiro = valor1;
            }
        }else {
            primeiro = valor3;
            if (valor1 > valor2) {
                segundo = valor1;
                terceiro = valor2;
            } else {
                segundo = valor2;
                terceiro = valor1;
            }
        }
        System.out.print("1º= "+primeiro+"\n2º= "+segundo+"\n3º= "+terceiro);


    }
}
