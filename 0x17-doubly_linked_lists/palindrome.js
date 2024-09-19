function largestPalindrome() {
  var arr = [];
  for (var i = 999; i > 100; i--) {
    for (var j = 999; j > 100; j--) {
      var mul = j * i;
      if (isPalin(mul)) {
        arr.push(j * i);
      }
    }
  }

  return Math.max.apply(Math, arr);
}

function isPalin(i) {
  return i.toString() == i.toString().split("").reverse().join("");
}

const fs = require("node:fs");

const content = `${largestPalindrome()}`;

fs.writeFile("102-result", content, (err) => {
  if (err) {
    console.error(err);
  } else {
    console.log("file written");
  }
});
