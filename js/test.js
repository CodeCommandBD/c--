let res = [5,2,4,8,3];

function count(num){

    for(let i=0; i <res.length; i++){
        if(num == res[i] ){
            console.log(`data found ${i}`);
        }
    }

}

count(8)