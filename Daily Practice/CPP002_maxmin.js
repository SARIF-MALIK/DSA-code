    findSum(arr,N){
        //code here
        const max = arr.reduce((a, b) => Math.max(a, b), -Infinity);
        const min = arr.reduce((a, b) => Math.min(a, b), Infinity);
        
        return max+min;
        
    }