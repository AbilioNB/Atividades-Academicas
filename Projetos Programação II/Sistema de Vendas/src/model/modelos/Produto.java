package model.modelos;

import java.util.Map;
import java.util.Scanner;

public class Produto {

    double peso;
    String nome;
    int estoqueMinimo;
    int estoqueAtual;
    double preco;

//get e set (s)

    public double getPeso(){
        return peso;
    }
    public void setPeso(double peso){
        this.peso=peso;
    }
    public String getNome(){
        return nome;
    }
    public void setNome(String nome){
        this.nome=nome;
    }

    public int getEstoqueMinimo() {
        return estoqueMinimo;
    }

    public void setEstoqueMinimo(int estoqueMinimo) {
        this.estoqueMinimo = estoqueMinimo;
    }

    public int getEstoqueAtual() {
        return estoqueAtual;
    }

    public void setEstoqueAtual(int estoqueAtual) {
        this.estoqueAtual = estoqueAtual;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    @Override
    public  String toString(){
        return "Nome:"+nome+"\nPeso:"+peso+"\nPreço(R$)="+preco+"\nEstoque Atual="+estoqueAtual+"\nEstoque Minimo="+estoqueMinimo;
    }
    public static Boolean validar_cadastro(Map map_consult,String key){

        Boolean resp=map_consult.containsKey(key);
        return resp;
    }








}


