function prime(num){
    let count = 0;

    for(let i = 2; i < num; i++){
        if(num % i == 0){
            count ++;
            break;
        }
    }

    if(count == 0){
        console.log(num + " is a Prime Number");  
    }else{
        console.log(num + " is Not a Prime Number");
    }
}

prime(6)
