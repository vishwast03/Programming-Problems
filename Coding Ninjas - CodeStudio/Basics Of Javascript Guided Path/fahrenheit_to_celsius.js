function Fahrenheit_to_Celsius(start , end , step){
   for(let i = start; i <= end; i+=step) {
       let cel = parseInt((i - 32) * (5 / 9));
       console.log(`${i} ${cel}`);
   }
}