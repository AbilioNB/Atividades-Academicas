package controller;

import model.gravar.CLienteDAO;
import model.gravar.ProdutoDAO;
import model.gravar.VendasDAO;
import model.gravar.VendedorDAO;
import model.modelos.Cliente;
import model.modelos.Produto;
import model.modelos.Venda;
import model.modelos.Vendedor;
import model.validacao.Validar;
import view.Show_time;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

import static model.gravar.VendasDAO.bancoVendas;

public class AllController {
    //1º etapa :executar programa
   public void executarPrograma(){
        int op=1;
        Show_time exibir=new Show_time();
        while (op!=0){
            exibir.showMenu();
            op=exibir.opMenu();
            Validar validacao= new Validar();

            switch (op){

                case 1:
                    //Cadastrar Cliente
                    Cliente buffer=new Cliente();
                    CLienteDAO gravar=new CLienteDAO();
                    buffer=Show_time.Cadastrar_cliente();
                    gravar.gravarCliente(buffer);
                    break;

                case 2:
                    //Listar Clientes
                    CLienteDAO gr=new CLienteDAO();
                    List listBuff= gr.showCliente();
                    exibir.swCli(listBuff);
                    break;

                case 3:
                    //Cadastrar Vendedor
                    VendedorDAO gravarV=new VendedorDAO();
                    Vendedor bufferV = new Vendedor();
                    bufferV=exibir.Cadastrar_Vendedor();
                    gravarV.gravarVendedor(bufferV);
                    break;

                case 4:
                    //Listar Vendedores
                    VendedorDAO gV=new VendedorDAO();
                    List listV= gV.showVendedor();
                    exibir.swVen(listV);
                    break;

                case 5:
                    //Cadastrar Produto
                    ProdutoDAO gravarP= new ProdutoDAO();
                    Produto bufferP = new Produto();
                    bufferP=exibir.new_product();
                    gravarP.gravarProduto(bufferP);
                    break;

                case 6:
                    //Listar Produtos
                    ProdutoDAO gP=new ProdutoDAO();
                    List listP=gP.showP();
                    exibir.swP(listP);
                    break;
                case 7:
                    //Registrar Venda
                    ProdutoDAO manutencaoEstoque= new ProdutoDAO();
                    VendasDAO salvarVenda= new VendasDAO();
                    Venda novaVenda = new Venda();
                    Map <String,String> dados=exibir.preVenda();
                    boolean val= validacao.validarVenda(bancoVendas,dados);

                    if(val){
                        novaVenda=exibir.efetivarVenda(dados);
                        salvarVenda.gravarVenda(novaVenda);
                        manutencaoEstoque.subtrairEstoque(dados);
                    }
                    else {
                        System.out.println("A venda não pode ser realizada!");
                    }
                    break;
                case 8:
                    VendasDAO gVen= new VendasDAO();
                    List listVen=gVen.listaVendas;
                    exibir.swVend(listVen);
                    break;
                case 0:
                    break;
                default:
                    System.out.println("Opção Inválida!");
            }
        }
    }



}
