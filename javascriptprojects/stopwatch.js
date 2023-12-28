let time=document.getElementById('time');
let start=document.getElementById('start');
let stoptime=document.getElementById('stop');
let reset=document.getElementById('reset');
let mins=0;
let secs=0;
let ms=0;
let timerid=null;
start.addEventListener('click',()=>{
    if(timerid==null){
        timerid=setInterval(()=>{
            ms++;
            if(ms==100){
                secs++;
                ms=0;
                if(secs==60){
                    mins++;
                    secs=0;
                    ms=0;
                }
            }
            ("0"+mins).length==2 ? mins="0"+mins : mins;
            ("0"+secs).length==2 ? secs="0"+secs : secs;
            ("0"+ms).length==2 ? ms="0"+ms : ms;
            time.textContent=`${mins} : ${secs} : ${ms}`;
        },10);
    }
});

stoptime.addEventListener('click',()=>{
    clearInterval(timerid);
    timerid=null;
});
reset.addEventListener('click',()=>{
    clearInterval(timerid);
    timerid=null;
    ms=0;
    secs=0;
    mins=0;
    time.textContent=`00 : 00 : 00`;
});