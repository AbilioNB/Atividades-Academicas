package model.gravar;

import model.modelos.Cliente;
import model.modelos.Venda;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class VendasDAO {


   public static Map<Integer, Venda> bancoVendas=new HashMap();

    public void gravarVenda(Venda newVenda){
        bancoVendas.put(bancoVendas.size()+1,newVenda);
    }

    public List<Venda> listaVendas= (List <Venda>) bancoVendas.values();
    public List showVendas(){
        return listaVendas;
    }



}
