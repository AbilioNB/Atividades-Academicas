package model.modelos;

import java.util.Map;
import java.util.Scanner;

public class Cliente extends PessoaFisica{

    double limiteCredito;

    //definindo get
    public double getLimiteCredito(){
        return limiteCredito;
    }

    public void setLimiteCredito(double limiteCredito){
        this.limiteCredito=limiteCredito;
    }




    public static  void exibir_nomes(Map map_show){

        String[] buffer= (String[]) map_show.keySet().toArray();

        for (int cont=0;cont<map_show.size();cont++){
            Cliente aux= (Cliente) map_show.get(buffer[cont]);
            System.out.println(aux.nome);

        }


    }


}
