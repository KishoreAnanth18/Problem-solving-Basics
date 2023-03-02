class Color{
    constructor(name,code) {
        this.name = name;
        this.code = code;
    }
}

// let black = new Color('black', '#000000');
// console.log(black);

let allColors = [
    new Color("Red","#FF0000"),
    new Color("Green","#FF0000"),
    new Color("Blue","#0000FF"),    
    new Color("Yellow","#FFFF00")    
]

exports.getRandomColors = () => {
    return allColors[Math.floor(Math.random()*allColors.length)];
}
// getRandomColors()
// console.log(getRandomColors())

exports.allColors = allColors;