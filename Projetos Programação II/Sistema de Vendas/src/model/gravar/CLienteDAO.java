package model.gravar;

import model.modelos.Cliente;
import model.validacao.Validar;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class CLienteDAO {

    private static Map<String, Cliente> bancoClientes=new HashMap();

    Validar newValidar=new Validar();
    //gravar cliente
    public void gravarCliente(Cliente user){
        boolean resp;
        if(newValidar.validarChave(user,bancoClientes)) {
            bancoClientes.put(user.getCpf(), user);
        }else{
            //erro
        }
    }
    public List<Cliente> listaClientes= (List <Cliente>) bancoClientes.values();
    public List showCliente(){
        return listaClientes;
    }




}
