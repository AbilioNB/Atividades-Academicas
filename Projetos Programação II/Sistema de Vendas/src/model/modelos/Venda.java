package model.modelos;

import java.util.Date;
import java.util.Map;
import java.util.Scanner;

public class Venda extends Produto {

    String nomeVendedor;
    String nomeCliente;
    int quantidade;
    long dataVenda;
    Produto produto;


    public String getNomeVendedor() {
        return nomeVendedor;
    }

    public String getNomeCliente() {
        return nomeCliente;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public long getDataVenda() {
        return dataVenda;
    }

    public Produto getProduto() {
        return produto;
    }

    public void setNomeVendedor(String nomeVendedor) {
        this.nomeVendedor = nomeVendedor;
    }

    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    public void setDataVenda(long dataVenda) {
        this.dataVenda = dataVenda;
    }

    public void setProduto(Produto produto) {

        this.produto = produto;
    }

    @Override
    public String toString(){

        return "Produto:"+produto+"Quantidade="+quantidade+"\nVendedor:"+nomeVendedor+"\nCliente:"+nomeCliente+"\nData:"+dataVenda;
    }




    public static void show_vendas(Map banco_vendas){

        Venda showVenda;
        if(banco_vendas.size()>0){
            for(int cont=1;cont<=banco_vendas.size();cont++){

                showVenda=(Venda) banco_vendas.get(cont);
                System.out.println(showVenda.produto.nome+"|"+"Quantidade: "+showVenda.quantidade+"|"+"Vendedor: "+showVenda.nomeVendedor);
            }
        }else {
            System.out.println("Nenhuma venda registrada!");
        }


    }
}
