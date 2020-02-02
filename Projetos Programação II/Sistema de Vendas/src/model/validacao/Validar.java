package model.validacao;


import model.modelos.PessoaFisica;
import model.modelos.Produto;

import java.util.Map;

public class Validar {


    // new client
    public boolean validarChave(PessoaFisica newUser, Map banco){
        boolean resp=false;
       if (!banco.containsKey(newUser.getCpf())){
           resp=true;
       }
       return resp;
    }
    public boolean validarVenda(Map estoque,Map valores){

        boolean resp= false;
        int quantidade = Integer.parseInt((String) valores.get("quantidade"));
        if(estoque.containsKey(valores.get("nome"))){
            Produto buffer = (Produto) estoque.get(valores.get("nome"));
            if(buffer.getEstoqueAtual()>quantidade){
                resp=true;
            }
        }
        return  resp;
    }



}
