function range(start, end) {
  let result = [];
  for (let i = start; i <= end; i++) {
    result.push(i);
  }
  return result;
}

function sum(numbers) {
  return numbers.reduce((acc, num) => acc + num, 0);
}

let x = sum(range(1, 10));
console.log(x);

//-----------Concatination:
// console.log('Kamrul ' + 'Hasan')

let a1 = ["Kamrul", "Hasan"];
let a2 = ["Jahan", "Lisa"];
console.log(a1 + a2);
console.log(a1.concat(a2)); //[concatination]
let a3 = [...a1, ...a2]; //[same]
let a4 = [a1, a2]; //[two dimensional array]
console.log(a3);
console.log(a4);

//-----------True = 1, False = 2 [want to print] [Ternary Operator]
console.log(true ? 1 : 2);
console.log(false ? 1 : 2);

//-----------[Cool]
console.log(8 * null);
// → 0
console.log("5" - 1);
// → 4
console.log("5" + 1);
// → 51
console.log("five" * 2);
// → NaN
console.log(false == 0);
// → true
console.log(null == undefined);
// → true
console.log(null == 0);
// → false
//[null = 0, "user"=1, it will show 1 and "Agnes"]
console.log(null || "user");
// → user
console.log("Agnes" || "user");
// → Agnes
console.log(0 || 100);
// → 100
// ?? -> takes always first number as long they are not (null or undefined), 0 is a number.
console.log(0 ?? 100);
// → 0
console.log(null ?? 100);
// → 100
console.log(undefined ?? 100);

//-----------[numbers & array]
let Num = 4;
let nNum = Num;
num = 400;

console.log(nNum); // 4 [coz, here Num assign in nNum as value]
//-----------

let arr = [1, 2, 3, 4, 5];
let narr = arr;
arr[0] = 100;

console.log(narr); // [100, 2, 3, 4, 5] ['arr' assign address or as reference]

//-----------[delete]
let Names = ["Kamrul", "Hasan", "Farjana", "Suchi"];
// delete Names[Names.length-1];
// Names[0]= 'Jahan'; //[delete kamrul, that is not suitable]
// Names.shift('Jasah'); // [do the same]
Names.unshift("Jahan");
Names.push("Lisa");
let pp = Names.pop();
console.log(Names);
console.log(pp);
//-----------[slice]
let arr11 = 'Hello Wrold';
let arr22 = arr11.slice(0, 5);
console.log(arr22);
//-----------
let ten = 10;
console.log(ten * ten); // 100
