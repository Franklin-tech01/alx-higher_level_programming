#!/usr/bin/node
let num = parseInt(process.argv[2], 10);
if (!isNaN(num) && num > 0) {
  for (num; num !==0; num--) {
    console.log("C is fun");
  }
} else {
  console.log('Missing number of occurrences');
}
