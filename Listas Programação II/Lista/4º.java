public class Main {

    public static void main(String[] args) {

        char exemplo='x';
        alfabeto(exemplo);

    }
    public static void alfabeto(char exemplo){
        boolean val=false;

        switch (exemplo){

            case 'a':
                val=true;
                break;

            case 'e':
                val=true;
                break;

            case 'i':
                val=true;
                break;


            case 'o':
                val=true;
                break;

            case 'u':
                val=true;
                break;

        }
        System.out.print("É vogal : "+val);
    }
}
