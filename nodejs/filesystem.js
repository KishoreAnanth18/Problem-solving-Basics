const fs = require('fs')

fs.readFile(`${__dirname}/pet.txt`,(err, data)=>{
    if(err){
        console.log("Error happened");
        return;
    }
    console.log(data.toString());
})

fs.writeFile(`${__dirname}/pet.txt`,'husky',(err)=>{
    if(err){
        console.log("Error happened");
        return;
    }
    console.log("Saved data successfully");
})

fs.unlink(`${__dirname}/pet1.txt`,(err)=>{
    if(err){
        console.log("Error occured");
        return;
    }
    console.log("Deleted successfully")
})


fs.rename(`${__dirname}/pet.txt`,`${__dirname}/pet1.txt`,(err)=>{
    if(err){
        console.log("Error occured");
        return;
    }
    console.log("File rename successful");
})