const fs = require('fs')
const superagent = require('superagent')

fs.readFile(`${__dirname}/pet.txt`,(err, data)=>{
    superagent
    .get(`https://dog.ceo/api/breed/${data}/images/random`)
    .end((err,res)=>{
        console.log(res.body);
    })
})

// fs.writeFile(`${__dirname}/pet.txt`,'husky',(err)=>{
//     if(err){
//         console.log("Error happened");
//         return;
//     }
//     console.log("Saved data successfully");
// })

// fs.unlink(`${__dirname}/pet1.txt`,(err)=>{
//     if(err){
//         console.log("Error occured");
//         return;
//     }
//     console.log("Deleted successfully")
// })


// fs.rename(`${__dirname}/pet.txt`,`${__dirname}/pet1.txt`,(err)=>{
//     if(err){
//         console.log("Error occured");
//         return;
//     }
//     console.log("File rename successful");
// })