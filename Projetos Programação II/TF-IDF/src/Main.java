import java.io.*;
import java.util.HashMap;
import java.util.Map;
public class Main {
    public static void main(String[] args) throws IOException {

        Map <Integer, String> map_text = new HashMap();
        receber_texto(map_text);
        Map <String, Integer> map_palavras = new HashMap();
        split_text(map_palavras,map_text);
        Map <String,Integer>palavras_idf=new HashMap ();
        String[] keysWords= map_palavras.keySet().toArray(new String[0]);
        calc_idf(palavras_idf,map_text,keysWords);
        Map<String,Double> tfidf_map=new HashMap();
        calc_tfidf(tfidf_map,map_text,map_palavras,palavras_idf,keysWords);
        print_system(tfidf_map,keysWords);
    }
    
    // SUGESTAO: seguir convenção java, 
    // metodos devem ser escritos em camelCase 
    // (http://www.oracle.com/technetwork/java/codeconventions-135099.html)
    public static void receber_texto(Map<Integer,String> map_text) throws IOException {
        InputStream is = new FileInputStream("text.txt");
        InputStreamReader isr = new InputStreamReader(is);
        BufferedReader br = new BufferedReader(isr);
        //recebe os textos
        int num = 1;
        String teste = br.readLine();
        while (teste != null) {

            map_text.put(num, teste);
            teste = br.readLine();
            num++;
        }
        try {
            br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    
    // nome fora do padrao
    public static void split_text(Map <String,Integer> map_palavras,Map <Integer,String> map_text){

        for (int aux = 1; aux <= map_text.size(); aux++) {

            String bufferText = map_text.get(aux);
            String[] bufferSplit = bufferText.split(" ");
            //criando steps
            String[] step_palavras = new String[bufferSplit.length];
            int[] step_cont = new int[bufferSplit.length];
            int qt=0;
            //1º For : Pegamos um texto e fatiamos em um vetor
            for (int cont1 = 0; cont1 < bufferSplit.length; cont1++) {
                int buffer = 0;
                //2ºPegamos a primeira palavra e no 3º comparamos ela com todas as outras
                for (int cont2 = 0; cont2 < bufferSplit.length; cont2++) {
                    if (bufferSplit[cont1].compareTo(bufferSplit[cont2]) == 0) {
                        buffer++;
                    }
                }

                step_palavras[cont1] = bufferSplit[cont1];
                step_cont[cont1] = buffer;
                qt++;
                for (int ct = 0; ct < qt; ct++) {
                    if (bufferSplit[cont1].compareTo(step_palavras[ct]) == 0) {
                        step_cont[cont1]=1;
                    }
                }

            }//fim do 2 for

            for(int cont2=0;cont2<step_cont.length;cont2++){
                if(map_palavras.containsKey(step_palavras[cont2])){

                    int soma=map_palavras.get(step_palavras[cont2])+step_cont[cont2];
                    map_palavras.put(step_palavras[cont2],soma);

                }else {
                    map_palavras.put(step_palavras[cont2],step_cont[cont2]);
                }
            }

        }

    }
    public static void calc_idf(Map <String,Integer> palavras_idf,Map <Integer,String> map_text,String[] keysWords){
        for (int cont=0;cont<keysWords.length;cont++){

            int encontrar=0;
            for (int aux=1;aux<=map_text.size();aux++) {
                String bufferText = map_text.get(aux);
                String[] bufferSplit = bufferText.split(" ");
                for(int cont3=0;cont3<bufferSplit.length;cont3++){
                    if (keysWords[cont].compareTo(bufferSplit[cont3])==0){
                        encontrar++;
                        break;
                    }
                }
            }
            palavras_idf.put(keysWords[cont],encontrar);
        }

    }
    public static void calc_tfidf(Map<String,Double> tfidf_map,Map<Integer,String> map_text,Map<String,Integer>map_palavras,Map<String,Integer>palavras_idf,String[] keysWords){

        for(int cont=0;cont<keysWords.length;cont++){
            double buffer;
            double idf=map_text.size()/palavras_idf.get(keysWords[cont]);
            buffer=map_palavras.get(keysWords[cont])*(Math.log10(idf));
            tfidf_map.put(keysWords[cont],buffer);
        }
    }
    public  static void print_system(Map <String,Double> tfidf_map,String[] keysWords){
        System.out.print("\n================================================");
        System.out.print("\nPROCESSAMENTO DO TFIDF DOS DOCUMENTOS ANEXADOS\n");
        System.out.print("================================================");
        System.out.print("\n     Palavra do Texto = Nº TFIDF    \n");
        System.out.print("=================================================\n");
        int exi=tfidf_map.size();
        for(int cont=0;cont<exi;cont++){
            System.out.println("\n    "+keysWords[cont]+"="+tfidf_map.get(keysWords[cont])+"   \n");
        }
        System.out.print("\n=============================================\n");

    }
}
