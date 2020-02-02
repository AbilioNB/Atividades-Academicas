package model.gravar;

import model.modelos.Cliente;
import model.modelos.Produto;
import model.validacao.Validar;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class ProdutoDAO {

    private static Map<String, Produto> bancoProdutos=new HashMap();



    public void gravarProduto(Produto unidade){
        bancoProdutos.put(unidade.getNome(),unidade);
    }

    public void subtrairEstoque(Map dados){
        String nome = (String) dados.get("nome");
        int qt = (Integer) dados.get("quantidade");
        Produto buffer = bancoProdutos.get(nome);
        int aux=buffer.getEstoqueAtual();
        buffer.setEstoqueAtual(aux-qt);
        bancoProdutos.put(nome,buffer);
    }

    public List<Produto> listaProdutos= (List <Produto>) bancoProdutos.values();
    public List showP(){
        return listaProdutos;
    }
}
