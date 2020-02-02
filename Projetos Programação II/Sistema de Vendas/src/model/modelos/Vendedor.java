package model.modelos;

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Map;
import java.util.Scanner;

public class Vendedor extends PessoaFisica {

    Date dataContrato;
    String matricula;

    //get
    public Date getDataContrato(){
        return dataContrato;
    }
    public String getMatricula(){
        return matricula;
    }
    //set
    public void setDataContrato(Date dataContrato){
        this.dataContrato=dataContrato;
    }
    public void setMatricula(String matricula){
        this.matricula=matricula;
    }


    public String toString(){

        return "Nome:"+nome+"\nMatricula:"+matricula+"\nData de Aniversario:"+dataAniversario;
    }



}
