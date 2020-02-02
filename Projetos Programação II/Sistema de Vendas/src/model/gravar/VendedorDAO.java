package model.gravar;

import model.modelos.Cliente;
import model.modelos.Vendedor;
import model.validacao.Validar;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class VendedorDAO {

   private static Map<String, Vendedor> bancoVendedor=new HashMap();

    Validar newValidar=new Validar();

    //gravar vendedor
   public void gravarVendedor(Vendedor user){
        if(newValidar.validarChave(user,bancoVendedor)){
            bancoVendedor.put(user.getCpf(),user);
        }else{
            //erro
        }
    }
    public List<Vendedor> listaVendedor= (List <Vendedor>) bancoVendedor.values();
    public List showVendedor(){
        return listaVendedor;
    }

}
