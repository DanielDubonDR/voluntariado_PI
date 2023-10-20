// & INPUTS
const inputNumero1 = document.querySelector('#numero1');
const inputNumero2 = document.querySelector('#numero2');


//& BOTONES
const btnSuma = document.querySelector('#suma');
const btnResta = document.querySelector('#resta');
const btnMultiplicacion = document.querySelector('#multiplicacion');
const btnDivision = document.querySelector('#division');

// &RESPUESTA
const respuesta = document.querySelector('#response');

// const btnSuma = document.getElementById('suma');
// const btnResta = document.getElementById('resta');
// const btnMultiplicacion = document.getElementById('multiplicacion');
// const btnDivision = document.getElementById('division');

btnSuma.addEventListener('click', () => {
    const numero1 = Number(inputNumero1.value);
    const numero2 = Number(inputNumero2.value);

    if(isNaN(numero1))
    {
        window.alert("Número 1: Ingrese un número válido")
    }

    if(isNaN(numero2))
    {
        window.alert("Número 2: Ingrese un número válido")
    }

    respuesta.innerHTML = numero1+numero2
});

btnResta.addEventListener('click', () => {
    const numero1 = Number(inputNumero1.value);
    const numero2 = Number(inputNumero2.value);

    if(isNaN(numero1))
    {
        window.alert("Número 1: Ingrese un número válido")
    }

    if(isNaN(numero2))
    {
        window.alert("Número 2: Ingrese un número válido")
    }

    respuesta.innerHTML = numero1-numero2
});

btnMultiplicacion.addEventListener('click', () => {
    const numero1 = Number(inputNumero1.value);
    const numero2 = Number(inputNumero2.value);

    if(isNaN(numero1))
    {
        window.alert("Número 1: Ingrese un número válido")
    }

    if(isNaN(numero2))
    {
        window.alert("Número 2: Ingrese un número válido")
    }

    respuesta.innerHTML = numero1*numero2
});

btnDivision.addEventListener('click', () => {
    const numero1 = Number(inputNumero1.value);
    const numero2 = Number(inputNumero2.value);

    if(isNaN(numero1))
    {
        window.alert("Número 1: Ingrese un número válido")
    }

    if(isNaN(numero2))
    {
        window.alert("Número 2: Ingrese un número válido")
    }
    else if(numero2===0)
    {
        return window.alert("Número 2: El denominador no puede ser 0")
    }

    respuesta.innerHTML = numero1/numero2
});