let inputslider=document.getElementById('inputslider');
let slidervalue=document.getElementById('slidervalue');
let genBtn=document.getElementById('genBtn');
let passbox=document.getElementById('passbox');
let lowercase=document.getElementById('lowercase');
let uppercase=document.getElementById('uppercase');
let numbers=document.getElementById('numbers');
let symbols=document.getElementById('symbols');
let copycontent=document.getElementById('copyicon');
slidervalue.textContent=inputslider.value;
inputslider.addEventListener('input',()=>{
    slidervalue.textContent=inputslider.value;
});
let upperchars="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
let lowerchars="abcdefghijklmnopqrstuvwxyz";
let allnumbers="0123456789";
let allsymbols="~!@#$%^&*";
genBtn.addEventListener('click',()=>{
    passbox.value=generatepassword();
});
function generatepassword(){
    let genpassword="";
    let allchars="";
    allchars+=symbols.checked ? allsymbols : "";
    allchars+=lowercase.checked ? lowerchars : "";
    allchars+=uppercase.checked ? upperchars : "";
    allchars+=numbers.checked ? allnumbers : "";
    if(allchars=="" || allchars.length==0){
        return genpassword;
    }
    for(let i=1;i<=inputslider.value;i++){
        genpassword+=allchars.charAt(Math.floor(Math.random()*allchars.length));

    }
    return genpassword;
    
}
copycontent.addEventListener('click',()=>{
    if(passbox.value!="" || passbox.value.length>=1){
        navigator.clipboard.writeText(passbox.value);
        copycontent.innerHTML="check";
        copycontent.title="Password Copied";
        setInterval(()=>{
            copycontent.innerHTML="content_copy";
            copycontent.title="";
            passbox.value="";
        },3000);
    }
});
// let number=document.getElementById('number');
// let increase=document.getElementById('increase');
// let decrease=document.getElementById('decrease');
// let reset=document.getElementById('reset');

// increase.addEventListener('click',(num)=>{
//     num=number.textContent;
//     num=Number(num);
//     number.textContent=num+1;
// });

// decrease.addEventListener('click',(num)=>{
//     num=number.textContent;
//     num=Number(num);
//     number.textContent=num-1;
// });

// reset.addEventListener('click',()=>{
//     number.textContent=0;
// });