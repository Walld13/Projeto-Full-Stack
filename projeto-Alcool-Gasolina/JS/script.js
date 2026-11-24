function calcularMelhorPreco(){

//Validar os campos

let precoAlcool = document.getElementById('alcool').value
let precoGasolina = document.getElementById('gasolina').value

if(precoAlcool != "" ){
if(precoGasolina != "" ){

    //Calcular

    let resultado = precoAlcool / precoGasolina 

    if(resultado >= 0.7){
    //alert("Melhor utilizar Gasolina")
    document.getElementById('resultado').innerHTML ="Melhor utilizar Gasolina"
    }else{
    //alert("Melhor utilizar Alcool")
    document.getElementById('resultado').innerHTML ="Melhor utilizar Alcool"
    }

}else{
alert("Preencha o preço da Gasolina")
}
}else{
alert("Preencha o preço do Álcool")
}
    
}