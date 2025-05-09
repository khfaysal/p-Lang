let nums = [11, 2, 3, 400, 5, 1, 221, 1128, 3329, 10];

nums.sort();
// console.log(nums); //not valid sort

//------------ but this is valid:
nu = [1, 3, 2, 5, 23, 0, 7];
nu.sort(function (a, b) {
  return a - b;
  // return b -a ;
});
console.log(nu);

// (a - b): ex: (1-3)=-2
//zero -> jemon ache temone thakbe.
//negative -> a bosbe agee.
//positive -> b bosbe agee.
//this is how the sort works.
