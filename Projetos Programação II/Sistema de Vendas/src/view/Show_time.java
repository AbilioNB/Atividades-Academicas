package view;

import model.modelos.Cliente;

import java.util.*;

import static model.modelos.Pessoa.receber_data;
import model.modelos.Produto;
import model.modelos.Venda;
import model.modelos.Vendedor;

import javax.swing.*;

public class Show_time {

    public void showMenu(){

        System.out.println("------------------------------------------------------");
        System.out.println("****************SISTEMA DE VENDAS*********************");
        System.out.println("------------------------------------------------------");

        System.out.println("[1]--Cadastrar Cliente");
        System.out.println("[2]--Listar Clientes");
        System.out.println("[3]--Cadastrar Vendedor");
        System.out.println("[4]--Listar Vendedores");
        System.out.println("[5]--Cadastrar Produto");
        System.out.println("[6]--Listar Produtos");
        System.out.println("[7]--Registrar Venda");
        System.out.println("[8]--Relatório de Vendas");
        System.out.println("[0]--Finalizar Programa");
        System.out.println("Informe a opção desejada= ");
    }
    public static int opMenu(){
        int resp;
        Scanner ler =new Scanner(System.in);
        return resp=ler.nextInt();
    }
    //Cliente
    public static Cliente Cadastrar_cliente(){

        Scanner ler =new Scanner(System.in);
        Cliente buffer= new Cliente();

        //cpf[chave]
        System.out.println("Informe o CPF DO CLIENTE  : ");
        buffer.setCpf(ler.next());
       // buffer.cpf= ler.next();
        //nome
        System.out.println("Nome do cliente :");
         buffer.setNome(ler.next());
        //email
        System.out.println("Informe o email: ");
        buffer.setEmail(ler.next());
        //endereço
        System.out.println("Informe o endereço : ");
        buffer.setEndereco(ler.next());
        //data
       System.out.println("Informe a data de nascimento:");
        buffer.setDataAniversario(receber_data());
        //telefone
        System.out.println("Informe o telefone: ");
        buffer.setTelefone(ler.next());
        //limite de credito
        System.out.println("Informe o limite de credito : ");
        buffer.setLimiteCredito(ler.nextDouble());
        return buffer;
    }
        public Vendedor Cadastrar_Vendedor(){
        Scanner ler =new Scanner(System.in);
        Vendedor buffer=new Vendedor();
            System.out.println("Informe o CPF DO CLIENTE  : ");
            buffer.setCpf(ler.next());
            System.out.println("Nome do funcionario:");
            buffer.setNome(ler.next());
            System.out.println("Informe o email: ");
            buffer.setEmail(ler.next());
            //endereço
            System.out.println("Informe o endereço : ");
            buffer.setEndereco(ler.next());
            //data
            System.out.println("Informe a data de nascimento:");
            buffer.setDataAniversario(receber_data());
            //telefone
            System.out.println("Informe o telefone: ");
            buffer.setTelefone(ler.next());
            //matricula
            System.out.println("Informe a matrciula:");
            buffer.setMatricula(ler.next());
            //data de contrato
            System.out.println("Informa a data de contrato:");
            buffer.setDataContrato(receber_data());
        return buffer;
        }
        //produto
        public Produto new_product(){

            Scanner ler =new Scanner(System.in);
            Produto buffer=new Produto();
            //nome{chave}
            System.out.println("Informe Nome: ");
            buffer.setNome(ler.next());
            System.out.println("Informe o peso :");
            buffer.setPeso(ler.nextDouble());
            System.out.println("Informe o preço [R$]");
            buffer.setPreco(ler.nextDouble());
            System.out.println("Informe o estoque atual do produto :");
            buffer.setEstoqueAtual(ler.nextInt());
            System.out.println("Informe o estoque minimo do produto:");
            buffer.setEstoqueMinimo(ler.nextInt());
            return buffer;
        }

        public Map preVenda(){
            Scanner ler =new Scanner(System.in);
            Map <String,String> dados= new HashMap ();

        System.out.println("Informe o nome do produto:");
            dados.put("nome",ler.nextLine());
        System.out.println("Informe a quantidade desejada :");
        dados.put("quantidade",ler.nextLine());
        return dados;
        }
        public Venda efetivarVenda(Map dados){
            Scanner ler =new Scanner(System.in);
            Venda buffer= new Venda();
            System.out.println("Nome do vendedor:");
            buffer.setNomeVendedor(ler.next());
            System.out.println("Nome do cliente:");
            buffer.setNomeCliente(ler.next());
            buffer.setDataVenda((System.currentTimeMillis()));
            buffer.setQuantidade((Integer) dados.get("quantidade"));
            buffer.setProduto((Produto) dados.get("nome"));
            return buffer;

        }

        //exibir dados

        //clientes
           public void swCli(List lista){
               for (Object c :lista)
                     {
                         c.toString();
               }
           }
          //vendedor
            public void swVen(List lista){
                for (Object c :lista)
                {
                    c.toString();
                }
            }
            //Produto
            public void swP(List lista){
                for (Object c :lista)
                {
                    c.toString();
                }
            }
            //Vendas
            public void swVend(List lista){
                for (Object c :lista)
                {
                    c.toString();
                }
            }




}
