package model.modelos;

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Map;
import java.util.Scanner;

public class Pessoa {

    Date dataAniversario;
    String nome;
    String email;
    String endereco;
    String telefone;


    public  static Date receber_data (){

        Scanner ler =new Scanner(System.in);
        Date dateBuffer = new Date();
        try{
            System.out.println("Informe a data de nascimento");
            String buffDate=buffDate=ler.next();
            DateFormat defaut = new SimpleDateFormat("dd/MM/yyyy");
            dateBuffer=defaut.parse(buffDate);
        }catch (ParseException ex){
            ex.printStackTrace();
        }
        return dateBuffer;
    }


    public static Boolean validar_cadastro(Map map_consult,String key){

        Boolean resp=map_consult.containsKey(key);
        return resp;
    }




    //Get(s)
    public String getNome(){
        return nome;
    }

    public String getEmail(){
        return email;
    }

    public String getEndereco(){
        return endereco;
    }

    public String getTelefone(){
        return telefone;
    }

    public Date getDataAniversario(){
        return dataAniversario;
    }

    //Set(s)

    public void  setNome(String nome){
        this.nome=nome;
    }

    public void setEmail(String email){
        this.email=email;
    }

    public void setEndereco(String endereco){
        this.endereco=endereco;
    }
    public void setTelefone (String telefone){
        this.endereco=endereco;
    }

    public void setDataAniversario(Date dataAniversario){
        this.dataAniversario=dataAniversario;
    }




}