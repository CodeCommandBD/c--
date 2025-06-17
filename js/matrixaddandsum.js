let matrixA = [
    [1, 3, 4],
    [1, 0, 9],
    [1, 2, 0]
];

let matrixB = [
    [0, 0, 2],
    [4, 5, 0],
    [0, 9, 8]
];

let matrixC = [
    [1, 3, 5],
    [1, 6, 8],
    [5, 3, 4]
];



const matrixSum = (matrixA, matrixB, matrixC) => {
    let res = [];

    for (let i = 0; i < matrixA.length; i++) {
        let row = [];
        for (let j = 0; j < matrixA[i].length; j++) {
           row.push(matrixA[i][j] + matrixB[i][j] +matrixC[i][j])
        }
        res.push(row)
    }
    return res;
}

console.log(matrixSum(matrixA, matrixB, matrixC));
